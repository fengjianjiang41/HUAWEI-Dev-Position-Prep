import sys

def main():
    data = sys.stdin.read().split()
    n = int(data[0])
    k = int(data[1])

    fans = []
    index = 2
    for i in range(1, n+1):
        x = int(data[index])
        y = int(data[index+1])
        index += 2
        support = x + 2*y
        fans.append((support, y, i))

    fans.sort(key=lambda x: (-x[0], -x[1], x[2]))

    selected_ids = [fan[2] for fan in fans[:k]]
    selected_ids.sort()
    print(' '.join(map(str, selected_ids)))

if __name__ == "__main__":
    main()

