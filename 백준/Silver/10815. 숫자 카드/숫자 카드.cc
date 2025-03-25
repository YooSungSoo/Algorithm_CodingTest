#include<bits/stdc++.h> 

using namespace std; 

int n,s;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	
	set<int> m;
	
	for(int i=0;i<n;i++){
		int num;
		cin >> num;
		m.insert(num);
	}
	
	cin >> s;
	vector<int> y(s);
	
	for(int i=0;i<s;i++){
		int num;
		cin >> num;
		y[i] = m.count(num) ? 1 : 0;
	}
	
	for(int i=0;i<s;i++){
		cout << y[i] << " ";
	}
	

	
	return 0;
	
}