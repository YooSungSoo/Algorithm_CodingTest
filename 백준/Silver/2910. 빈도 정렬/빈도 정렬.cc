#include<bits/stdc++.h>

using namespace std;

int n,c,a[1004];
vector<pair<int,int>> v;
map<int,int> m,m_f;

bool cmp(pair<int,int> a, pair<int, int> b){
	if(a.first == b.first){
		return m_f[a.second] < m_f[b.second];
	}
	return a.first > b.first;
}

int main(void){
	
	cin >> n >> c;
	
	map<int,int> m;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
		m[a[i]]++;
		if(m_f[a[i]] == 0) m_f[a[i]] = i + 1; 
	}
	for(auto it : m){
		v.push_back({it.second, it.first});
	}
	sort(v.begin(),v.end(),cmp);
	for(auto i : v){
		for(int j=0;j<i.first;j++){
			cout << i.second << " ";
		}
	}
	
	return 0;
}