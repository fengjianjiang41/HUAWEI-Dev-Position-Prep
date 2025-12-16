import sys


def solve(s):
    s = list(s)
    n = len(s)
    for i in range(1, n):
        k = i
        while k > 0:
            if ord(s[k]) - 1 > ord(s[k - 1]):
                s[k - 1], s[k] = chr(ord(s[k]) - 1), s[k - 1]
                k -= 1
            else:
                break

    return "".join(s)


t = int(input().strip())
for _ in range(t):
    s = input().strip()
    print(solve(s))
