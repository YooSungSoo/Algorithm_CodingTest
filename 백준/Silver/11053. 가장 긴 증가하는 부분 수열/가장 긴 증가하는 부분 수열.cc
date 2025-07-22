#include<bits/stdc++.h>

using namespace std;

int n,k;

int main(){
	
	cin >> n;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}
	
	vector<int> l;
	
	for(int i=0;i<n;i++){
		
		if(l.empty() || l.back() < v[i]){
			l.push_back(v[i]);
		}else{
			auto it = lower_bound(l.begin(),l.end(),v[i]);
			*it = v[i];
		}
	}
	
	cout << l.size();
	
	return 0;
}