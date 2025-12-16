import sys

def main():
    data= sys.stdin.read().strip().split()
    if not data:
        return
    n,k= int(data[0]), int(data[1])
    a=list(map(int, data[2: 2+n]))
    a.sort()
    i=n-1
    rank=0
    while i>0:
        if a[i]-a[i-1] <= k:
            rank+=a[i]*a[i-1]
            i-=2
        else:
            i-=1
    print(rank)


if __name__=="__main__":
    main()
