#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int n, m, a, b, c, start, endd;
vector<pair<int, int>> graph[100004];
int dist[100004];


void dijkstra(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    fill(dist, dist + n + 1, INF);

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        int current_dist = pq.top().first;
        int current_node = pq.top().second;
        pq.pop();

        if (current_dist > dist[current_node]) continue;

        for (int i = 0; i < graph[current_node].size(); i++) {
            int next_node = graph[current_node][i].first;
            int weight = graph[current_node][i].second;

            if (dist[next_node] > dist[current_node] + weight) {
                dist[next_node] = dist[current_node] + weight;
                pq.push({dist[next_node], next_node});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    
    for(int i=0;i<m;i++){
    	cin >> a >> b >> c;
    	graph[a].push_back({b,c});
	}
	
	cin >> start >> endd;
	
	dijkstra(start);
	
	cout << dist[endd];

    return 0;
}
