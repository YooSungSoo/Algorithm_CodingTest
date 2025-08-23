#include<bits/stdc++.h>
using namespace std;

int visited[104][104];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};
int rst;

void bfs(int y, int x, int n, int m, vector<vector<int>> maps){
    visited[y][x] = 1;
    queue<pair<int,int>> q;
    q.push({y,x});
    
    while(!q.empty()){
        int a = q.front().first;
        int b = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int ny = a + dy[i];
            int nx = b + dx[i];
            if(ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
            if(maps[ny][nx] == 0 ) continue;
            if(visited[ny][nx] !=0) continue;
            
            visited[ny][nx] = visited[a][b] + 1;
            q.push({ny,nx});
        }
    }   
}

int solution(vector<vector<int> > maps)
{
    int n = maps.size();
    int m = maps[0].size();
    bfs(0,0,n,m,maps);
    rst = visited[n-1][m-1]; 
    
    if(rst==0) rst = -1;
    return rst;
}