n, x = list(input().split(" "))
n = int(n)
ans = 0
for i in range(1, n + 1):
    num = str(i)
    for ch in num:
        if ch == x:
            ans += 1
print(ans)
