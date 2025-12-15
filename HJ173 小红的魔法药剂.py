import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    a = list(map(int, data[1:1+n]))
    
    total_cost = sum(a)
    saving = 0
    index = 1 + n
    for i in range(n):
        b = int(data[index])
        c = int(data[index+1])
        index += 2
        cost_b = a[b-1]
        cost_c = a[c-1]
        cost_i = a[i]
        d = cost_b + cost_c - cost_i
        if d < 0:
            saving += d
            
    result = total_cost + saving
    print(result)

if __name__ == "__main__":
    main()
