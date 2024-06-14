n = int(input())
pos = []
neg = []
pre_pos = []
pre_neg = []
for i in range(0, n):
    s = input()
    ls = list(s.split(" "))
    if ls[0] == '1':
        pos.append(s[2::])
        ts = ""
        for k in pos[-1].split(" "):
            ts += k[0]
        pre_pos.append(ts)
    else:
        neg.append(s[2::])
        ts = ""
        for k in neg[-1].split(" "):
            ts += k[0]
        pre_neg.append(ts)
m = int(input())
for _ in range(0, m):
    n1 = input().split(" ")
    n2 = input().split(" ")
    t = 0
    s1 = ""
    s2 = ""
    for i in n1:
        t += len(i)
        s1 += i[0]
    for j in n2:
        t += len(j)
        s2 += j[0]
    s1, s2 = s1 + s2, s2 + s1
    ans = []
    flag = True
    for i, x in enumerate(pre_pos):
        if s1 == x or s2 == x:
            ans.append(i)
    if len(ans) == 0:
        flag = False
        for i, x in enumerate(pre_neg):
            if s1 == x or s2 == x:
                ans.append(i)
    a = len(ans)
    if a == 0:
        print("tian ji bu ke xie lu")
    elif a == 1:
        print(pos[ans[0]] if flag else neg[ans[0]])
    else:
        print(pos[ans[t % a]] if flag else neg[ans[t % a]])
