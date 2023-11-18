def solve():
    n = int(input())
    a = list(map(int, input().split(" ")))
    mnidx = a.index(min(a))
    for i in range(mnidx, n - 1):
        if a[i] > a[i + 1]:
            print(-1)
            return
    print(mnidx)


if __name__ == "__main__":
    t = int(input())
    for _ in range(0, t):
        solve()
