#include <bits/stdc++.h>
using namespace std;

int n,k;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

  	cin >> n;
  	priority_queue<int> pq;
  	
  	for(int i=0;i<n;i++){
  		cin >> k;
  		if(k==0){
  			if(pq.empty()) cout << 0 << "\n";
  			else{
  				cout << pq.top() << "\n";
  				pq.pop();
			  }
		  }
		else pq.push(k);
	  }

    return 0;
}
