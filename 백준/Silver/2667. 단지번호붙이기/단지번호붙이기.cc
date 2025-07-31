#include <bits/stdc++.h>

using namespace std;

int n,k;
string s;
int a[30][30];
int visited[30][30];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int rst;

int dfs(int y, int x){

	visited[y][x] = 1;
	
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx <0 || nx >=n) continue;
		if(visited[ny][nx]==1 || a[ny][nx] == 0)continue;
		dfs(ny,nx);
		rst ++;
	}
	return rst;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> s;
		for(int j=0;j<n;j++){
			a[i][j] = s[j] - '0';
		}
	}
	
	vector<int> v;
	int num = 0;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visited[i][j]==0 && a[i][j]==1){
				rst = 1;
				v.push_back(dfs(i,j));
				num++;
			}
			
		}
	}
	
	cout << num << "\n";
	sort(v.begin(),v.end());
	for( auto k : v){
		cout << k << "\n";
	}
	
    return 0;
}
