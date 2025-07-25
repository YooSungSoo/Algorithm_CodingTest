#include <bits/stdc++.h>
using namespace std;

int n, m; 
int a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;
	vector<vector<int>> g(n + 1);
	vector<int> indegree(n+1,0);
	
	for(int i=0;i<m;i++){
		cin >> a >> b;
		g[a].push_back(b);
		indegree[b] ++;
	}
	
	queue<int> q;
	
	for(int i=1;i<=n;i++){
		if(indegree[i]==0) q.push(i);
	}

	vector<int> rst;
	
	while(!q.empty()){
		int cur = q.front();
		q.pop();
		rst.push_back(cur);
		
		for(int i : g[cur]){
			indegree[i]--;
			if(indegree[i]==0) q.push(i);
		}
	}
	
	for(auto i : rst){
		cout << i << " ";
	}
	
    return 0;
}
