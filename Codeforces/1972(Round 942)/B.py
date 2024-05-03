def solve():
    n = int(input())
    s = input()
    cnt = s.count("U")
    if cnt % 2 == 1:
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        solve()
