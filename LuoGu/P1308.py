wd = input().upper()
a = input().upper().split(" ")
ans = 0
idx = -1
length = 0
for i in range(0, len(a)):
    if wd == a[i]:
        ans += 1
        if idx == -1:
            idx = i + length
    length += len(a[i])
if ans == 0:
    print(-1)
else:
    print("{} {}".format(ans, idx))
