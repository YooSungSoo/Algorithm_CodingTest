a = int(input())

for i in range(0,a):
    num , s = input().split()

    rst = ''
    for str in s:
        rst += str * int(num)

    print(rst)