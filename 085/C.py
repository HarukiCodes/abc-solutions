n, y = map(int, input().split())
exist = False
for i in range(n + 1):
    for j in range(n - i + 1):
        k = n - i - j
        if k >= 0 and 10000 * i + 5000 * j + 1000 * k == y:
            print(i, j, n - i - j)
            exist = True
            break
    if exist:
        break
if not exist:
    print(-1, -1, -1)
