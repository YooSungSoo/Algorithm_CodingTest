#include<bits/stdc++.h>

using namespace std;

int n,m,k,cnt;
int a[101][101], visited[101][101];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int dfs(int y, int x){
	int size = 1;
	visited[y][x] = 1;
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if(!visited[ny][nx] && a[ny][nx]==0) size += dfs(ny,nx);
	}
	return size;
}

int main(void){
	
	vector<int> a_size;
	
	cin >> n >> m >> k;
	for(int i=0;i<k;i++){
		int x1,x2,y1,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		
		for(int i=y1;i<y2;i++){
			for(int j=x1;j<x2;j++){
				if(a[i][j]==0) a[i][j]=1;
			}
		}
	}
	
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(!visited[i][j] && a[i][j]==0){
					int size = dfs(i,j);
					a_size.push_back(size);
					cnt++;
				}
			}
		}
		
	sort(a_size.begin(),a_size.end());
	
	cout << cnt << "\n";
	
	for(int s : a_size){
		cout << s << " ";
	}

	return 0;
}