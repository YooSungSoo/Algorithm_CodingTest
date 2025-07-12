import sys

a = int(sys.stdin.readline())
cnt = [0]*10001

for i in range(0,a):
    b =int(sys.stdin.readline())
    cnt[b] += 1

for i in range(1,10001):
    if cnt[i] > 0:
        for j in range(0,cnt[i]):
            print(i)

