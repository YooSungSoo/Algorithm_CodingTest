a = input()

if int(a) < 100:
    rst = int(a)
    print(rst)

else :
    rst = 99
    for i in range(100,int(a)+1):
        n = str(i)
        if int(n[1])-int(n[0]) == int(n[2])-int(n[1]):
            rst += 1
    
    print(rst)