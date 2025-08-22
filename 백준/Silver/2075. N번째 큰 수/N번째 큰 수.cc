#include <bits/stdc++.h>
using namespace std;

int n;
int a[1504][1504];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	priority_queue<int,vector<int>,greater<int>> pq;
	cin >> n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(pq.size() <n)pq.push(a[i][j]);
			else if(a[i][j] > pq.top()){
				pq.pop();
				pq.push(a[i][j]);
			}
		}
	}
	cout << pq.top();

    return 0;
}
