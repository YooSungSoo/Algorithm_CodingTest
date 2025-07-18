import sys

a = int(sys.stdin.readline())
stack = []

for i in range(0,a):
    k = int(sys.stdin.readline())
    if k == 0:
        stack.pop()
    else :
        stack.append(k)

print(sum(stack))