#include<bits/stdc++.h>
using namespace std;

int n, a, b, m;
int p, c;
int visited[104];

void bfs(vector<vector<int>> v, int k){
	
	visited[k] = 1;
	queue<int> q;
	q.push(k);
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int i=0;i<v[cur].size();i++){
			if(visited[v[cur][i]] != 0) continue;
			visited[v[cur][i]] = visited[cur] + 1;
			q.push(v[cur][i]);
		}
	}
	return ;
}

int main(){
	
	cin >> n;
	cin >> a >> b;
	cin >> m;
	
	vector<vector<int>> v(n+1);
	
	while(m--){
		cin >> p >> c;
		v[p].push_back(c);
		v[c].push_back(p);
	}
	
	bfs(v,a);
	
	if(visited[b]==0) cout << -1;
	else cout << visited[b]-1;
	
	
    return 0;
}