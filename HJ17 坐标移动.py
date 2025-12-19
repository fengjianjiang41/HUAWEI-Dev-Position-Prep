string = input()

str_list = string.split(';')
d = {}
for item in str_list:
    if len(item) > 1 and item[0] in list('ADSW') and item[1:].isdecimal():
        d[item[0]] = d.get(item[0], 0) + int(item[1:])

x, y = (d['D'] - d['A']), (d['W'] - d['S'])
print('%d,%d' %(x, y))
