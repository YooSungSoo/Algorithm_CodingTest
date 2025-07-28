#include<bits/stdc++.h>

using namespace std;

int n,m,a,b;
vector<vector<int>> v(104);
int visited[104];
int num;

int dfs(int k){

	visited[k] = 1;
	for(int i=0;i<v[k].size();i++){
		if(visited[v[k][i]]==0){
			dfs(v[k][i]);
			num++;
		}
	}
	return num;
}

int main(void){
	
	cin >> n >> m;
	
	for(int i=0;i<m;i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	int rst = dfs(1);
	cout << rst;
	return 0;
}