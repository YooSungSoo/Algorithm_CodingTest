#include <bits/stdc++.h>
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin >> v[i];
	} 
	sort(v.begin(),v.end(),greater<int>());
	
	int day = 0;
    for (int i = 0; i < n; i++) {
        day = max(day, v[i] + i + 1);
    }
	
	cout << day + 1;
	
	
    return 0;
}
