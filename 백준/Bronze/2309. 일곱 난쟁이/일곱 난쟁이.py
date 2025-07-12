import sys


a = [int(sys.stdin.readline().strip()) for _ in range(9)]
s = sum(a)
found = False

for i in range(0,9):
    for j in range(i+1,9):
        if s - (a[i] + a[j]) == 100:
            fake1 = a[i]
            fake2 = a[j]
            found = True
            break
    if found == True:
        break
a.remove(fake1)
a.remove(fake2)

a.sort()
for i in a:
    print(i)