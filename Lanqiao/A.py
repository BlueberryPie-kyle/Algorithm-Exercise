n = int(input())
pyq = []
for _ in range(0, n):
    ls = list(map(str, input().split(" ")))
    pyq.append(ls[1::])
ans = []
m = int(input())
query = list(map(str, input().split(" ")))
for x in query:
    cnt = 0
    for y in pyq:
        if x in y:
            cnt += 1
    if cnt == 0 or cnt == 1:
        ans.append(x)
print("No one is handsome" if len(ans) == 0 else ans)