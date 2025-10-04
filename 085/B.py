n = int(input())
d, exist = [0] * n, [0] * (101)
for i in range(n):
    d[i] = int(input())
    exist[d[i]] += 1
ans = 0
for i in exist:
    if i > 0:
        ans += 1
print(ans)
