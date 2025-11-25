import sys
from itertools import permutations


def permutationsofn(n):
    line = []
    for perm in permutations(range(1, n + 1)):
        line.append(" ".join(map(str, perm)) + "\n")

    sys.stdout.write("".join(line))


n = int(input())
permutationsofn(n)
