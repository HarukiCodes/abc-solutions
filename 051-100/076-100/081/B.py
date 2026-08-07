n = int(input())
a = list(map(int, input().split()))

ans = 0
while True:
    if any(i % 2 != 0 for i in a):
        break
    a = [i // 2 for i in a]
    ans += 1

print(ans)
