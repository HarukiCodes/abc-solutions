n, a, b = map(int, input().split())


def digit_sum(num):
    s = list(str(num))
    sum = 0
    for c in s:
        sum += int(c)
    return sum


ans = 0
for i in range(1, n + 1):
    if a <= digit_sum(i) <= b:
        ans += i
print(ans)
