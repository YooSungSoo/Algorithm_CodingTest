#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	vector<pair<int,int>> a(n);
	
	for(int i=0;i<n;i++){
		cin >> a[i].second >> a[i].first;
	}
	
	sort(a.begin(),a.end());
	
	for(int i=0;i<n;i++){
		cout << a[i].second << " " << a[i].first << "\n";
	}

	
	
	return 0;
}