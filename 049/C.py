s = input()[::-1]
words = [d[::-1] for d in ["dream", "dreamer", "erase", "eraser"]]
i = 0
while i < len(s):
    for w in words:
        if s[i : i + len(w)] == w:
            i += len(w)
            break
    else:
        print("NO")
        exit()
print("YES")
