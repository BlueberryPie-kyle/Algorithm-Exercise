luckyNum = [4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 477, 747, 774, 777]


def check(x):
    for i in luckyNum:
        if x % i == 0:
            return True
    return False


def solve():
    n = int(input())
    if n in luckyNum or check(n):
        print("YES")
    else:
        print("NO")


if __name__ == "__main__":
    t = 1
    # t = int(input())
    for _ in range(0, t):
        solve()
