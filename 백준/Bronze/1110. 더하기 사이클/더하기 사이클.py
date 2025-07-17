n = input()

if len(n) < 2:
    n = '0' + n

main = n

rst = 0

while 1:

    a = str(int(n[0]) + int(n[1]))
    n = n[1] + a[-1]  
    rst += 1

    if n == main:
        break

print(rst)
