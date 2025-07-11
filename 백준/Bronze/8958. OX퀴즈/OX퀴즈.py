n = int(input())

for i in range(0,n):
    l = input().strip()
    a = 0
    rst = 0
    for j in l:
        if j == 'O':
            a+= 1
            rst += a
        else: a = 0

    print(rst)
