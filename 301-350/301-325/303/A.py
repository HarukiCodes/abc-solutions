n = int(input())
s = input()
t = input()


def is_similar(a, b):
    return (a == "1" and b == "l") or (a == "0" and b == "o") 


ans = True
for i in range(n):
    if not (s[i] == t[i] or is_similar(s[i], t[i]) or is_similar(t[i], s[i])):
        ans = False

print("Yes" if ans else "No")
