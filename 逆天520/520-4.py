_ = int(input())
flag = 0
for i in range(0, _):
    s = input()
    for j in s:
        if j <= '9' and j >= '0':
            flag = 1
            print(s)
            break
if flag == 0:
    print("Not interesting.")