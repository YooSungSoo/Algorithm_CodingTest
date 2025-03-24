#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	vector<pair<int,int>> a(n);
	
	for(int i=0;i<n;i++){
		cin >> a[i].first >> a[i].second;
	}
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<n;i++){
		cout << a[i].first << " " << a[i].second << "\n";
	}

	
	
	return 0;
}