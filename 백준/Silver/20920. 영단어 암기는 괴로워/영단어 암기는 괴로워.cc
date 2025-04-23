#include <bits/stdc++.h>

using namespace std;

int n,m;
string s;
unordered_map<string,int> mp;
vector<string> v;

bool cmp(const string &a, const string &b){
	if(mp[a] !=mp[b])
		return mp[a] > mp[b];
	if(a.length() != b.length())
		return a.length()>b.length();
	return a < b;
	
}

int main() {

	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> s;
		if(s.length() < m)continue;
		mp[s]++;
		if(mp[s] ==1){
			v.push_back(s);
			
		}
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0;i<v.size();i++){
		cout << v[i] << "\n";
	}
	

    return 0;
}
