import random


def g(y, z):
    if len(z) == 12:
        while len(y) < 12:
            y = z[11 - len(y)] + y
        p = str(int(y[0:6]) + 1) + y[6:]
        q = str(int(y[0:6]) - 1) + y[6:]
        return min(
            abs(int(y) - int(z)), min(abs(int(p) - int(z)), abs(int(q) - int(z)))
        )
    elif len(z) == 13:
        while len(y) < 12:
            y = "9" + y
        # print(int(z) - int(y))
        return int(z) - int(y)
    else:  # len(z) < 12
        y = "100000" + y
        # print(int(y) - int(z))
        return int(y) - int(z)


def f(Y, Z):
    m = float("inf")
    for i in range(100000, 1000000):
        X = int(str(i) + str(Y))
        d = abs(X - Z)
        if d < m:
            m = d
    return m

# Y, Z = input().split(" ")
# print(f(int(Y), int(Z)))
# print(g(str(Y), str(Z)))


T = int(99999999)
while T != 0:
    y = random.randint(100000, 999999)
    z = random.randint(0, 1000000000000)
    try:
        if f(int(y), int(z)) != g(str(y), str(z)):
            print("y={}, z={}".format(y, z))
        T -= 1
    except:
        print(y)
        print(z)
        break


# y, z = input().split(" ")
# ans = 0x3f3f3f3f3f3f
# for i in range(100000, 1000000):
#     ans = min(abs(int(str(i) + str(y)) - int(z)), ans)
# print(ans)
