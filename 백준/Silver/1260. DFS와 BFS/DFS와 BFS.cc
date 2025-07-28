#include<bits/stdc++.h>

using namespace std;

int n, m, k, a, b;
vector<vector<int>> v(1004);
int visited[1004];

void dfs(int a){
	visited[a]=1;
	cout << a << " ";
	for(int i=0;i<v[a].size();i++){
		if(visited[v[a][i]]==0){
			dfs(v[a][i]);
		}
	}
	return ;
}

void bfs(int a){
	visited[a] = 1;
	queue<int> q;
	q.push(a);
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		cout << cur << " ";
		
		for(int i=0;i<v[cur].size();i++){
			if (visited[v[cur][i]] == 0) {
                visited[v[cur][i]] = 1;
                q.push(v[cur][i]);
            }
		}
		
	}
	return ;
}

int main(){
	
	cin >> n >> m >> k;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	 for (int i = 1; i <= n; i++) {
        sort(v[i].begin(), v[i].end());
    }

	
	dfs(k);
	fill(visited, visited + 1004, 0);
	cout << "\n";
	bfs(k);
	return 0;
}