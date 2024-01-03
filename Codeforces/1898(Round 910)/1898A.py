def solve():
    n, k = map(int, input().split(" "))
    s = input()
    nb = s.count('B')
    dif = k - nb
    if dif < 0:
        dif = abs(dif)
        cnt = 0
        for i, x in enumerate(s):
            if x == 'B':
                cnt += 1
            if cnt == dif:
                print(1)
                print(str(i + 1) + " A")
                return
    elif dif > 0:
        cnt = 0
        for i, x in enumerate(s):
            if x == 'A':
                cnt += 1
            if cnt == dif:
                print(1)
                print(str(i + 1) + " B")
                return
    else:
        print(0)



if __name__ == "__main__":
    tc = int(input())
    for i in range(0, tc):
        solve()