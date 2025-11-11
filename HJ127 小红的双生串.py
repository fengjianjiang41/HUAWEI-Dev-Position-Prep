s= input()
str_data = 'abcdefghijklmnopqrstuvwxyz'
length_h = len(s)//2
count1 = length_h - max([s[:length_h].count(str) for str in str_data])
count2 = length_h - max([s[length_h:].count(str) for str in str_data])
print(count1+count2)
