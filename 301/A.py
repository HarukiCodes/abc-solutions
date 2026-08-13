n = int(input())
s = input()

t_wins, a_wins = 0, 0
for c in s:
    if c == "T":
        t_wins += 1
        if t_wins * 2 >= n:
            print("T")
            break
    else:
        a_wins += 1
        if a_wins * 2 >= n:
            print("A")
            break
