
import sys

a = int(sys.stdin.readline())
arr = list(map(int, sys.stdin.readline().split()))

b = int(sys.stdin.readline())
l = list(map(int, sys.stdin.readline().split()))

s = set()

for i in arr:
    s.add(i)

for i in l :
    if i in s:
        print(1,end=" ")
    else:
        print(0,end=" ")        
