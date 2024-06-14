import math

xy = []
n = int(input())
for k in range(1, n + 1):
    div = n / k
    if n % k == 0 and math.sqrt(div) - int(math.sqrt(div)) == 0:
        y1 = int(math.sqrt(div) - 1)
        y2 = int(-1 - math.sqrt(div))
        x1 = k * y1
        x2 = k * y2
        if y1 != 0:
            xy.append([x1, y1])
        if y2 != 0:
            xy.append([x2, y2])
xy = sorted(xy)
print(xy)
# for i in xy:
#     print("({}, {})".format(i[0], i[1]))