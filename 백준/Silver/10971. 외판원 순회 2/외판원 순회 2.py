from itertools import permutations
import sys

input = sys.stdin.readline

n = int(input())
w = [list(map(int, input().split())) for _ in range(n)]

min_cost = float('inf')

cities = [i for i in range(1, n)]

for path in permutations(cities):
    cost = 0
    current = 0 

    is_valid = True

    for next_city in path:
        if w[current][next_city] == 0:
            is_valid = False
            break
        cost += w[current][next_city]
        current = next_city

    if is_valid and w[current][0] != 0:
        cost += w[current][0]
        min_cost = min(min_cost, cost)

print(min_cost)
