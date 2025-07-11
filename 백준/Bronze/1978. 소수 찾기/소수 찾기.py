def d(k):
    if k < 2:
        return False
    for i in range(2,int(k**0.5)+1):
        if k % i == 0:
            return False
    return True

a = input()
b = list(input().split())
rst = 0

for i in b:
    if d(int(i)) :
        rst += 1

print(rst)