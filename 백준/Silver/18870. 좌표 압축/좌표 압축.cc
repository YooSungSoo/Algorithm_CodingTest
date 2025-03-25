#include<bits/stdc++.h> 

using namespace std; 

long long n,a,min1;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	vector<int> s(n);
	vector<int> s_s(n);

	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	s_s = s;
	sort(s_s.begin(),s_s.end());
	s_s.erase(unique(s_s.begin(), s_s.end()), s_s.end());
	
	map<int,int> map;
	for(int i=0;i<s_s.size();i++){
		map[s_s[i]]=i;
	}
	for (int i = 0; i < n; i++) {
        cout << map[s[i]] << " ";
    }

	
	return 0;
	
}