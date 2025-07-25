import sys
from collections import deque

n, m = map(int, sys.stdin.readline().split())

graph = [[] for _ in range(n + 1)] # 그래프
indegree = [0] * (n + 1) # 진입 차수

# 그래프 구성
for _ in range(m):
    a, b = map(int, sys.stdin.readline().split())
    graph[a].append(b)     # a가 b 앞에 있어야 함 (a → b)
    indegree[b] += 1       # b의 진입 차수 증가

# 진입 차수가 0인 노드를 큐에 삽입
q = deque()
for i in range(1, n + 1):
    if indegree[i] == 0:
        q.append(i)

result = []

# 위상 정렬 시작
while q:
    cur = q.popleft()
    result.append(cur)

    for i in graph[cur]:
        indegree[i] -= 1  # 현재 노드 제거 → 연결 노드 진입 차수 감소
        if indegree[i] == 0:
            q.append(i)   # 진입 차수가 0이 되면 큐에 삽입

# 결과 출력
print(' '.join(map(str, result)))
