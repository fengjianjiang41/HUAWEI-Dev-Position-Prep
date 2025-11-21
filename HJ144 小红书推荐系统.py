import sys

string = input().split()
table = {}
for i in string:
    if i not in table:
        table[i]=0
    table[i]+=1

words_sorted = [i for i in table.keys() if table[i] >= 3]
print("\n".join(sorted(words_sorted,key=lambda x:(-table[x],x))))

# The sorted() function does not sort the tuple itself. Instead, the tuple (-table[x], x) serves as the sorting key that Python uses to determine the final position of each word in the output list.
# Here is how Python sorts using this key:
# Tuple Comparison: Python compares tuples element by element from left to right.
# Primary Sort Criterion (Frequency): The first element in the key tuple is -table[x], the negative frequency of the word.
# Since Python's default sort is ascending (smallest to largest), by using the negative frequency, words with the highest frequency will have the smallest (most negative) value. This effectively sorts by frequency in descending order (most frequent first).
# Secondary Sort Criterion (Alphabetical): If two words have the exact same frequency, the first elements of their key tuples will be equal. Python then proceeds to compare the second elements of the tuples, which is x (the word itself).
