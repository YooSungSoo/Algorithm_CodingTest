import sys

a = int(sys.stdin.readline())


for i in range(0,a):
    k = sys.stdin.readline().strip()
    stack = []
    for c in k:
        if len(stack) == 0:
            stack.append(c)
        elif stack and stack[-1] == '(' and c == ')':
            stack.pop()
        else :
            stack.append(c)

    if len(stack)==0 :
        print("YES")
    else :
        print("NO")
