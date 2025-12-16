import sys
from collections import Counter

t = int(input())

output = []
for i in range(t):
    output.append(0)

    n, m, k = list(map(int, input().split()))

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    count_b = Counter(b)
    count_a = Counter(a[:m])

    matches = 0
    for num in count_b:
        if num in count_a:
            matches += min(count_a[num], count_b[num])
    if matches >= k:
        output[i] += 1
    
        

    for j in range(1, n - m + 1, 1):
        prev_num = a[j - 1]
        new_num = a[j + m - 1]

        # prev_num
        if prev_num in count_b:
            if count_a[prev_num] <= count_b[prev_num]:
                matches -= 1
            
        count_a[prev_num] -= 1

        if count_a[prev_num] == 0:
            count_a.pop(prev_num)
        
        # new_num
        if new_num not in count_a:
            count_a[new_num] = 1
        else:
            count_a[new_num] += 1
        
        if count_a[new_num] <= count_b[new_num]:
            matches += 1
        
        
        if matches >= k:
            output[i] += 1
    

for o in output:
    print(o)
