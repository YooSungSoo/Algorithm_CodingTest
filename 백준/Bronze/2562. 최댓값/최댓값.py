l = []
for i in range(0,9):
    a = int(input())
    l.append(a)

m = l[0]
k = 0
for i in range(0,9):
    if l[i] > m:
        m = l[i]
        k = i

print(m)
print(k+1)