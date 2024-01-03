vowels = ["A", "E", "I", "O", "U", "Y"]


def solve():
    ans = ""
    s = input()
    for x in s:
        if x.upper() not in vowels:
            ans += "." + x.lower()
    print(ans)
            

if __name__ == "__main__":
    t = 1
    # t = int(input())
    for _ in range(0, t):
        solve()
