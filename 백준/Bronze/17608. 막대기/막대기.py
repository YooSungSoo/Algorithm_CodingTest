import sys

a = int(sys.stdin.readline())

stk = []

for _ in range(a):
    hight = int(sys.stdin.readline())
    stk.append(hight)

m = 0
rst = 0

while stk:
    current = stk.pop()
    if current > m:
        rst += 1
        m = current

print(rst)