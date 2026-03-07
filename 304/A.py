n = int(input())
s, a = [None] * n, [None] * n
for i in range(n):
    s[i], a[i] = input().split()
    a[i] = int(a[i])

mi = min(a)
mi_pos = 0
for i in range(n):
    if a[i] == mi:
        mi_pos = i

for i in range(n):
    print(s[(mi_pos + i) % n])
