#include<bits/stdc++.h> 

using namespace std; 

string s;

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> s;
	sort(s.begin(),s.end());
	reverse(s.begin(),s.end());
	cout << s;
	
	
	return 0;
}