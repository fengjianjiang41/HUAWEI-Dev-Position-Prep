while True:
    try:
        a,b=set(input()),set(input())
        print ("true" if a&b==a else "false")
    except:
        break

#   详细说明
# while True:

# 无限循环，持续处理多组测试数据

# a,b = set(input()),set(input())

# 读取两行输入，分别转换为集合

# 例如：输入 "abc" 和 "abdec"，则：

# a = {'a', 'b', 'c'}

# b = {'a', 'b', 'd', 'e', 'c'}

# a & b == a

# a & b 是集合的交集运算，返回两个集合共有的元素

# 如果 a & b == a，说明a中的所有元素都在b中，即a是b的子集

# 输出结果

# 如果a是b的子集：输出 "true"

# 否则：输出 "false"
