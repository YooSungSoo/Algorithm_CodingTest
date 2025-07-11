a, b, c, d = map(int,input().split())
rst1 = 0
rst2 = 0

if c-a > a:
    rst1 += a
elif a==c :
    rst1 += 0
else :
    rst1 += c-a

if d-b > b:
    rst2 += b
elif b==d:
    rst2 += 0
else :
    rst2 += d-b


if rst1>rst2:
    print(rst2)
else :
    print(rst1)