#include<bits/stdc++.h>

using namespace std;

bool visited[10001];
vector<pair<int,int>> graph[10001];
int v, e, a, b, c;

int prim(int start) {
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    int total_cost = 0;

    pq.push({0, start});

    while (!pq.empty()) {
        int cost = pq.top().first;
        int cur = pq.top().second;
        pq.pop();

        if (visited[cur]) continue;

        visited[cur] = true;
        total_cost += cost;

        for (int i = 0; i < graph[cur].size(); i++) {
            int next_cost = graph[cur][i].first;
            int next_node = graph[cur][i].second;

            if (!visited[next_node]) {
                pq.push({next_cost, next_node});
            }
        }
    }

    return total_cost;
}

int main(){
	
	cin >> v >> e;
	
	for(int i=0;i<e;i++){
		cin >> a >> b >> c;
		graph[a].push_back({c,b});
		graph[b].push_back({c,a});
	}
	
	cout << prim(1) << "\n";
	
	return 0;
}