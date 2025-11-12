n = int(input())
s = input()
d = []
for i in range(1, 10):
    d.append(s.count(str(i)))
 
if max(d) - min(d) <= 1:
    print("YES")
else:
    print("NO")
