def cal(k):
    if k == 0:
        return 1
    elif k < 0:
        return 0
    
    return cal(k - 1) + cal(k - 2) + cal(k - 3)


n = int(input()) 

l = []

for i in range(0,n):
    l.append(int(input()))

for k in l:
    print(cal(k))
