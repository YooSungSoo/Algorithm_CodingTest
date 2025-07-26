#include <bits/stdc++.h>
using namespace std;

int n, rst;
int a[104][104];
int visited[104][104];

int dy[] = {1,0,-1,0};
int dx[] = {0,1,0,-1};

void dfs(int y, int x, int z){
	
	visited[y][x] = 1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || ny >= n || nx < 0 || nx >= n ) continue;
		if(visited[ny][nx]== 1 || a[ny][nx] <= z) continue;
		dfs(ny,nx,z);
	}
	return;
}
 

int main() {
	
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	int m = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
			if(a[i][j]>m) m = a[i][j];
		}
	}
	
	
	for(int k = 0;k <m;k++){
		memset(visited, 0, sizeof(visited));	
		int d = 0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if (a[i][j] > k && visited[i][j] == 0) {
                    dfs(i, j, k);
					d++;
				}
			}
		}
		if(d>rst) rst = d;
	}
	
	
	cout << rst;
	
	
    return 0;
}
