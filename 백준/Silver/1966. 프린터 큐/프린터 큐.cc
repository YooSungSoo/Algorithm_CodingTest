#include <bits/stdc++.h>
using namespace std;

int n,k;
int a,b;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	for(int i = 0;i<n;i++){
		cin >> a >> b;
		queue<pair<int,int>> q;
		priority_queue<int> pq;
		
		for(int j=0;j<a;j++){
			cin >> k;
			q.push({k,j});
			pq.push(k);
		}
		
		int rst = 0;
		
		while(!q.empty()){
			int c_p = q.front().first;
			int c_i = q.front().second;
			q.pop();
			
			if(c_p==pq.top()){
				
				pq.pop();
				rst++;
				
				if(c_i == b){
					cout << rst << "\n";
					break;
				} 
			}else{
				q.push({c_p,c_i});
			}
		}
	}

    return 0;
}
