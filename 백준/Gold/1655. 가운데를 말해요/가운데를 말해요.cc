#include <bits/stdc++.h>
using namespace std;

int n,k;
int num;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

  	cin >> n;
  	priority_queue<int> max_pq;
  	priority_queue<int,vector<int>,greater<int>> min_pq;
  	
  	for(int i=0;i<n;i++){
  		cin >> k;
  		
  		 if(max_pq.empty() || k <= max_pq.top()) {
            max_pq.push(k);
        } else {
            min_pq.push(k);
        }
  		
  		
		if(max_pq.size() > min_pq.size() +1){
			min_pq.push(max_pq.top());
			max_pq.pop();
		}else if (!min_pq.empty() && min_pq.size() > max_pq.size()){
			max_pq.push(min_pq.top());
			min_pq.pop();
		}
		
		cout << max_pq.top() << "\n";
		
	  }

    return 0;
}
