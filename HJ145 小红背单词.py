import sys

def solve():
    n=int(input())
    words=[sys.stdin.readline().strip() for _ in range(n)]
    known_words=set()
    encounter_counts={}
    length=0
    for word in words:
        if word in known_words:
            continue
        encounter_counts[word]=encounter_counts.get(word,0)+1
        if encounter_counts[word]==length+1:
            length+=1
            known_words.add(word)
    print(length)

solve()
