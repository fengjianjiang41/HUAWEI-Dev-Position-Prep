def solve():
    n = int(input())
    s = input().strip()
    s = s + s
    pos = [-1] * 26
    ans = n - 1
    for i in range(len(s)):
        idx = ord(s[i]) - ord('a')
        if pos[idx] != -1:
            ans = min(ans, i - pos[idx] - 1)
        pos[idx] = i
    if ans >= n - 1:
        print(-1)
    else:
        print(ans)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
