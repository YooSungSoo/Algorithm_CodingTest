import sys

sys.setrecursionlimit(10**6)
n = int(sys.stdin.readline())

print(2**n - 1)

if n <= 20:
    def hanoi(n, start, mid, end):
        if n == 1:
            print(f"{start} {end}")
            return
        hanoi(n - 1, start, end, mid)
        print(f"{start} {end}")
        hanoi(n - 1, mid, start, end)

    hanoi(n, 1, 2, 3)
