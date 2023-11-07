def solve():
    s = str(input())
    pin = [i if i != '0' else '10' for i in s]
    pin = list(map(int, pin))
    print(4 + abs(pin[0] - 1) + abs(pin[1] - pin[0]) + abs(pin[2] - pin[1]) + abs(pin[3] - pin[2]))
    

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        solve()
