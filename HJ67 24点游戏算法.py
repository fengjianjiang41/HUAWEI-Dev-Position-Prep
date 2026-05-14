from itertools import permutations

def can_get_24(nums):
    """判断4个数字是否能通过加减乘除得到24"""
    
    def dfs(nums):
        """递归求解"""
        if len(nums) == 1:
            return abs(nums[0] - 24) < 1e-6
        
        # 尝试所有数字对
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                a, b = nums[i], nums[j]
                
                # 剩余的数字
                remaining = [nums[k] for k in range(len(nums)) if k != i and k != j]
                
                # 尝试所有运算
                # 加法
                if dfs(remaining + [a + b]):
                    return True
                
                # 减法（两种顺序）
                if dfs(remaining + [a - b]):
                    return True
                if dfs(remaining + [b - a]):
                    return True
                
                # 乘法
                if dfs(remaining + [a * b]):
                    return True
                
                # 除法（注意除数不能为0）
                if abs(b) > 1e-6 and dfs(remaining + [a / b]):
                    return True
                if abs(a) > 1e-6 and dfs(remaining + [b / a]):
                    return True
        
        return False
    
    return dfs(nums)


if __name__ == "__main__":
    # 读取输入
    a, b, c, d = map(int, input().split())
    nums = [a, b, c, d]
    
    # 输出结果
    print("true" if can_get_24(nums) else "false")
