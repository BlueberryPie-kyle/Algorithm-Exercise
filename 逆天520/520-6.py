n = int(input())
sp = list(map(int, input().split(" ")))
m = int(input())
bill = list(map(int, input().split(" ")))
for i in bill:
    if i in sp:
        print("ZengYu")
    else:
        print("JieDai")