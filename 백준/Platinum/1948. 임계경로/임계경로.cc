#include <bits/stdc++.h>

using namespace std;

const int MAX = 10001;

vector<pair<int, int>> graph[MAX];     // 정방향 그래프
vector<pair<int, int>> reverse_graph[MAX]; // 역방향 그래프
int in_degree[MAX];    // 진입차수
int dist[MAX];         // 시작점으로부터 최장 거리
bool visited[MAX];     // 역방향 경로 추적용

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;

    // 그래프 구성
    for (int i = 0; i < M; i++) {
        int u, v, cost;
        cin >> u >> v >> cost;

        graph[u].emplace_back(v, cost);       // 정방향
        reverse_graph[v].emplace_back(u, cost); // 역방향
        in_degree[v]++;
    }

    int start, end;
    cin >> start >> end;

    // 1. 위상 정렬 + 최장 거리 계산
    queue<int> q;
    q.push(start);

    while (!q.empty()) {
        int cur = q.front(); q.pop();

        for (auto& k : graph[cur]) {
        	auto next = k.first;
        	auto time = k.second;
            if (dist[next] < dist[cur] + time)
                dist[next] = dist[cur] + time;

            in_degree[next]--;
            if (in_degree[next] == 0)
                q.push(next);
        }
    }

    // 2. 역방향 BFS로 간선 추적
    int count = 0;
    queue<int> rq;
    rq.push(end);
    visited[end] = true;

    while (!rq.empty()) {
        int cur = rq.front(); rq.pop();

        for (auto& k : reverse_graph[cur]) {
        	auto prev = k.first;
        	auto time = k.second;
            if (dist[prev] + time == dist[cur]) {
                count++; // 이 간선은 최장 경로의 일부
                if (!visited[prev]) {
                    visited[prev] = true;
                    rq.push(prev);
                }
            }
        }
    }

    cout << dist[end] << '\n'; // 최장 시간
    cout << count << '\n';     // 최장 경로 간선 수

    return 0;
}
