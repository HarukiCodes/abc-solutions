n = int(input())
a = list(map(int, input().split()))

alice, bob = 0, 0
a.sort(reverse=True)
for i in range(n):
    if i % 2 == 0:
        alice += a[i]
    else:
        bob += a[i]

print(alice - bob)
