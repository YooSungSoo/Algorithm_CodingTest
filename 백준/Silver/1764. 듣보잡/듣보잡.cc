#include<bits/stdc++.h>

using namespace std;

int n,m,cnt;

int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> n >> m;
	
	set<string> set;
	
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		set.insert(s);
	}
	
	vector<string> r;
	
	for(int i=0;i<m;i++){
		string s;
		cin >> s;
		if(set.count(s)){
			r.push_back(s);
			cnt++;
		}
	}
	sort(r.begin(),r.end());
	cout << cnt << endl;
	for(int i=0;i<r.size();i++){
		cout << r[i] << endl;
	}

	return 0;
}  