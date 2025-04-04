#include <bits/stdc++.h>

using namespace std;

int t,m,n,k,rst,x,y;
int a[51][51], visited[51][51];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

void dfs(int y, int x){
	visited[y][x] = 1;
	
	for(int i=0;i<4;i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny<0 || nx <0 || ny>=n || nx >=m ) continue;
		if(a[ny][nx]==1 && !visited[ny][nx]){
			dfs(ny,nx);
		}
	}
	return;
}

int main() {
    cin >> t;
    
    while(t--){
    	
    	fill(&a[0][0],&a[0][0] + 51 * 51, 0);
    	fill(&visited[0][0],&visited[0][0] + 51 * 51, 0);
    	rst = 0;
    	
    	cin >> m >> n >> k;
    	for(int i=0;i<k;i++){
    		int q,w;
    		cin >> q >> w;
    		a[w][q] = 1;
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1 && !visited[i][j]){
					dfs(i,j);
					rst++;
				}
			}
		}
		cout << rst << "\n";
		
	}
    
    return 0;
}
