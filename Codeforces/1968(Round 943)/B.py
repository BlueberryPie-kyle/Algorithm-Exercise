def solve():
    lena, lenb = list(input().split(" "))
    a = input()
    b = input()
    i, j = 0, 0
    while j < len(b) and i < len(a):
        if a[i] == b[j]:
            i += 1
        j += 1
    print(i)

if __name__ == '__main__':
    t = int(input())
    for _ in range(0, t):
        solve()