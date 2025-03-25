#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	vector<pair<int,string>> a(n);
	
	for(int i=0;i<n;i++){
		cin >> a[i].first >> a[i].second;
	}
	
	stable_sort(a.begin(), a.end(), [](const pair<int, string> &p1, const pair<int, string> &p2) {
        return p1.first < p2.first; 
    });
	
	for(int i=0;i<n;i++){
		cout << a[i].first << " " <<  a[i].second << "\n";
	}
	
	
	return 0;
}