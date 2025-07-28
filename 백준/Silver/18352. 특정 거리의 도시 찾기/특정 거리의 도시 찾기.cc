#include<bits/stdc++.h>

using namespace std;

int n, m, k, x, a, b;
vector<vector<int>> v(300004);
int visited[300004];

void bfs(int z){
	visited[z]=1;
	queue<int> q;
	q.push(z);
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		
		for(int i=0;i<v[cur].size();i++){
			if(visited[v[cur][i]]==0){
				visited[v[cur][i]] = visited[cur] + 1;
				q.push(v[cur][i]);
			}
		}
	}
}

int main(){
	
	cin >> n >> m >> k >> x;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
	}
	
	bfs(x);
	int cnt = 0;
	bool found = false;
	
    for (int i = 1; i <= n; i++) {
        if (visited[i] == k + 1) {
            cout << i << "\n";
            found = true;
        }
    }

    if (!found) cout << -1 << "\n";
	
	return 0;
}