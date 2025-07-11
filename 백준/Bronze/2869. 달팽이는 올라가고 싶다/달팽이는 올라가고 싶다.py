import math
a, b, c = map(int, input().split())

day = math.ceil((c - b) / (a - b))

print(day)