n, m, k, l, d = map(int,input().split())

row_count = {}
col_count = {}

for _ in range(d):
    x1,y1,x2,y2 = map(int,input().split())
    if x1 == x2:
        col = min(y1,y2)
        col_count[col]=col_count.get(col,0) + 1
    else:
        row = min(x1,x2)
        row_count[row]=row_count.get(row,0) + 1

k_sorted = sorted(row_count.items(),key=lambda x:(-x[1],x[0]))
l_sorted = sorted(col_count.items(),key=lambda x:(-x[1],x[0]))

k_list = [k_[0] for k_ in k_sorted[:k]]
l_list = [l_[0] for l_ in l_sorted[:l]]

k_list.sort()
l_list.sort()

print(' '.join(map(str, k_list)))  
print(' '.join(map(str, l_list)))


"""
n, m, k, l, d = map(int, input().split())
row_count = {}
col_count = {}

for _ in range(d):
    x1, y1, x2, y2 = map(int, input().split())
    if x1 == x2:  # 同一行，左右相邻
        col = min(y1, y2)
        col_count[col] = col_count.get(col, 0) + 1
    else:  # 同一列，上下相邻
        row = min(x1, x2)
        row_count[row] = row_count.get(row, 0) + 1

rows = sorted(row_count.items(), key=lambda x: (-x[1], x[0]))
cols = sorted(col_count.items(), key=lambda x: (-x[1], x[0]))

selected_rows = [row[0] for row in rows[:k]]
selected_cols = [col[0] for col in cols[:l]]

selected_rows.sort()
selected_cols.sort()

print(' '.join(map(str, selected_rows)))
print(' '.join(map(str, selected_cols)))
"""
