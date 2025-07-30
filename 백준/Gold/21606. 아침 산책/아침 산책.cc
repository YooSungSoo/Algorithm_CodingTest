#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    string A;
    cin >> A;

    vector<vector<int>> adj(N+1);
    for(int i=0,u,v; i<N-1; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll ans = 0;
    vector<bool> visited(N+1,false);

    for(int u=1; u<=N; u++){
        if (A[u-1] != '1') continue;
        for(int v: adj[u]){
            if (A[v-1] == '1') ans++; 
        }
    }

    for(int i = 1; i <= N; i++){
        if (A[i-1]=='0' && !visited[i]){
            queue<int> q;
            visited[i] = true;
            q.push(i);
            ll indoor_count = 0;

            while(!q.empty()){
                int u = q.front(); q.pop();
                for(int v: adj[u]){
                    if (A[v-1]=='0'){
                        if (!visited[v]){
                            visited[v] = true;
                            q.push(v);
                        }
                    } else {
                        indoor_count++;
                    }
                }
            }
            ans += indoor_count * (indoor_count - 1);
        }
    }

    cout << ans << "\n";
    return 0;
}
