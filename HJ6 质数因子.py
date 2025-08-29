s = int(input())
a = []
i = 2
while i * i <= s:
    while s % i == 0:
        a.append(i)
        s = s//i
    i = i + 1
if s > 1:
    a.append(s)
print(' '.join(map(str, a)))

