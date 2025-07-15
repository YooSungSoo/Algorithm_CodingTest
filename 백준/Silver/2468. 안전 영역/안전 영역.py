import sys
sys.setrecursionlimit(100000) 
input = sys.stdin.readline     

n = int(input())
graph = [list(map(int, input().split())) for _ in range(n)]

dx = [0, 0, -1, 1]
dy = [-1, 1, 0, 0]

def dfs(x, y, h, visited):
    visited[y][x] = True
    for i in range(4):
        nx = x + dx[i]
        ny = y + dy[i]
        if 0 <= nx < n and 0 <= ny < n:
            if not visited[ny][nx] and graph[ny][nx] > h:
                dfs(nx, ny, h, visited)

max_height = max(map(max, graph))
result = 0

for h in range(0, max_height + 1):
    visited = [[False] * n for _ in range(n)]
    safe_area = 0

    for y in range(n):
        for x in range(n):
            if not visited[y][x] and graph[y][x] > h:
                dfs(x, y, h, visited)
                safe_area += 1

    result = max(result, safe_area)

print(result)
