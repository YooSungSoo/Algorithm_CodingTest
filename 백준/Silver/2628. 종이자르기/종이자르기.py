import sys
a, b = map(int,sys.stdin.readline().split())
n = int(sys.stdin.readline())

g = [0,b]
s = [0,a]

for i in range(0,n):
    c , d = map(int,sys.stdin.readline().split())
    if c == 0:
        g.append(d)
    else:
        s.append(d)

g.sort()
s.sort()
mg = 0
ms = 0

for i in range(0,len(g)-1):
    if g[i+1] - g[i] > mg:
        mg = g[i+1] - g[i]
for i in range(0,len(s)-1):
    if s[i+1] - s[i] > ms:
        ms = s[i+1] - s[i]

print(ms*mg)
