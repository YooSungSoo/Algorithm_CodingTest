import sys

a = int(sys.stdin.readline())
l = [int(sys.stdin.readline()) for _ in range(a)]

l.sort()

for i in l:
    print(i)
