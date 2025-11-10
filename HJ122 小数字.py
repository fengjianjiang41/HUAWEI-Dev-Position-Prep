#!/usr/bin/env python3
import sys, math
 
def min_after_ops(n: int, m: int) -> int:
    # 1) 阶段一：优先开根号
    while m > 0 and n >= 4:
        n = math.ceil(math.sqrt(n))
        m -= 1
 
    # 2) 阶段二：剩下的操作只能用减 1 或者 /2
    #    但当 n<4 时，无论 n=1,2,3，减 1 都足够把它降到 0，并且
    #    “减 1”比 “除 2 向上” 更快或一样快（1->0, 2->1->0, 3->2->1->0）。
    #    因此我们只用减法：
    return n-m
 
def main():
    data = sys.stdin.read().split()
    it = iter(data)
    T = int(next(it))
    out = []
    for _ in range(T):
        n = int(next(it))
        m = int(next(it))
        out.append(str(min_after_ops(n, m)))
    sys.stdout.write("\n".join(out))
 
if __name__ == "__main__":
    main()
