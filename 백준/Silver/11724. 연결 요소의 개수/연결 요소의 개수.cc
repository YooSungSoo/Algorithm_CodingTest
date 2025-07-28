#include<bits/stdc++.h>

using namespace std;

int n,m,a,b;
int visited[1004];
int rst;
vector<vector<int>> v(1004);

void dfs(int k){
	visited[k]=1;
	for(int i=0;i<v[k].size();i++){
		if(visited[v[k][i]]==0){
			dfs(v[k][i]);
		}
	}
	return;
}



int main(void){
	
	cin >> n >> m;

	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1;i<=n;i++){
		if(visited[i]==0){
			dfs(i);
			rst++;
		}
	}
	cout << rst;

	return 0;
}