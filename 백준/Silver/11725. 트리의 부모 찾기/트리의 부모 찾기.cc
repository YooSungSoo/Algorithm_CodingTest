#include<bits/stdc++.h>

using namespace std;

int a, b, n;
vector<int> v[100004];
int visited[100004];
int g[100004];

void dfs(int k){
	
	visited[k]=1;
	
	for(int i=0;i<v[k].size();i++){
		if(visited[v[k][i]]==0){
			g[v[k][i]] = k;
			dfs(v[k][i]);
		}
	}
}

int main(){
	
	cin >> n;
	for(int i=0;i<n-1;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dfs(1);
	
	for(int i=2;i<=n;i++){
		cout << g[i] << "\n";
	}
	
	
	return 0;
}