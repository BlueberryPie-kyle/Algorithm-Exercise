n = input()

if n[0] == "-":
    s = n[1:]
    s = s[::-1]
    s = int(s)
    s = str(s)
    if s != '0':
        s = "-" + s
    else:
        s = "0"
else:
    s = n[::-1]
    s = int(s)
    s = str(s)
    
print(s)
