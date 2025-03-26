#include <bits/stdc++.h>

using namespace std;

int n,k,m;

int main() {
	ios::sync_with_stdio(false);  
    cin.tie(NULL); 

	cin >> n >> k;
	queue<int> q;
	vector<int> y;
	
	for(int i=0;i<n;i++){
		q.push(i+1);
	}
	
	while(q.size()!=0){
		for(int i=0;i<k-1;i++){
			q.push(q.front());
			q.pop();
		}
		y.push_back(q.front());
		q.pop();
	}
	
	cout << "<";
	for(int i=0;i<y.size();i++){
		if(i<y.size()-1) cout << y[i] << ", ";
		else cout << y[i];
	}
	cout << ">";
	
    return 0;
}
