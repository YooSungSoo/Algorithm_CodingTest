#include<bits/stdc++.h>
using namespace std;

int n,m;

int main(){
	
	cin >> m >> n;
	vector<string> board(n);
	for(int i=0;i<n;i++){
		cin >> board[i];
	}
	const int INF = 1e9;
	vector<vector<int>> dist(n,vector<int>(m,INF));
	
	int dy[4] = {-1,0,1,0};
	int dx[4] = {0,1,0,-1};
	
	deque<pair<int,int>> dq;
	dist[0][0] = 0;
	dq.push_front({0,0});
	
	while(!dq.empty()){
		
		int y = dq.front().first;
        int x = dq.front().second;
		dq.pop_front();
		
		int cur = dist[y][x];
		
		for(int i=0;i<4;i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			
			int w = (board[ny][nx]=='1');
			
			if(dist[ny][nx] > cur + w){
				dist[ny][nx] = cur + w;
				if(w==0) dq.push_front({ny,nx});
				else dq.push_back({ny,nx});
			}
		}
	}
	cout << dist[n-1][m-1];
		
	return 0;
}
