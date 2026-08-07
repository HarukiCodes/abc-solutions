n = int(input())

t_list = [0]
x_list = [0]
y_list = [0]
for _ in range(n):
    t, x, y = map(int, input().split())
    t_list.append(t)
    x_list.append(x)
    y_list.append(y)

for i in range(n):
    dt = t_list[i + 1] - t_list[i]
    distance = abs(x_list[i + 1] - x_list[i]) + abs(y_list[i + 1] - y_list[i])
    # 経過時間より進んでる or 進んだ距離と経過時間の偶奇が不一致
    if dt < distance or distance % 2 != dt % 2:
        print("No")
        exit()
print("Yes")
