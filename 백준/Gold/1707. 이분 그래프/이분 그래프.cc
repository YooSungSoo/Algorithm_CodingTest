#include<bits/stdc++.h>

using namespace std;

vector<int> s[200004];
int visited[200004];
int k, v, e, a, b;

bool isBipartite(int start){
	
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int next : s[cur]) {
            if (visited[next] == 0) {
                visited[next] = -visited[cur]; 
                q.push(next);
            } else if (visited[next] == visited[cur]) {
                return false;
            }
        }
    }
    return true;
	
}

int main(){
	
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
	
	cin >> k;
	while(k--){
		cin >> v >> e;
		for(int i=0;i<e;i++){
			cin >> a >> b;
			s[a].push_back(b);
			s[b].push_back(a);
		}
		
		bool isValid = true;
        for (int i = 1; i <= v; i++) {
            if (visited[i] == 0) {
                if (!isBipartite(i)) {
                    isValid = false;
                    break;
                }
            }
        }
        cout << (isValid ? "YES" : "NO") << '\n';

	for (int i = 1; i <= v; i++) {
   		s[i].clear();
    	visited[i] = 0;
	}

	}
	
	return 0;
}