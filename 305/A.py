n = int(input())
mi = min(n % 5, 5 - n % 5)
if mi == n % 5:
    print(n - mi)
else:
    print(n + mi)
