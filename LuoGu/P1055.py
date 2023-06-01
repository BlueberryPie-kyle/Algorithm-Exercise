a = input()
s = a.replace("-", "")
curSum = 0
for i in range(0, 9, 1):
    curSum += int(s[i]) * (i + 1)
curSum %= 11
if curSum == 10:
    curSum = "X"
if a[-1] == str(curSum):
    print("Right")
else:
    print(a[:-1] + str(curSum))
