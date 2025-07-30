#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<string> mat(N);
    for(int i=0;i<N;i++) cin >> mat[i];

    vector<vector<int>> graph(N+1);
    vector<int> outdeg(N+1, 0), ans(N+1, 0);

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(mat[i][j] == '1'){
                graph[j+1].push_back(i+1);
                outdeg[i+1]++;
            }
        }
    }

    priority_queue<int> pq;
    for(int i=1;i<=N;i++){
        if(outdeg[i] == 0){
            pq.push(i);
        }
    }

    int num = N;
    while(!pq.empty()){
        int u = pq.top(); pq.pop();
        ans[u] = num--;
        for(int v : graph[u]){
            outdeg[v]--;
            if(outdeg[v] == 0){
                pq.push(v);
            }
        }
    }

    if(num != 0){
        cout << -1;
    } else {
        for(int i=1;i<=N;i++){
            cout << ans[i] << (i<N?' ':'\n');
        }
    }
    return 0;
}
