#include <bits/stdc++.h>

using namespace std;

int n;
double rst1,rst2,rst3,rst4,a;
vector<int> v;
map<int,int> mp;


bool cmp(const int &a,const int &b){
	if(mp[a]!=mp[b]) return mp[a] > mp[b];
	else return a<b;
}

int main() {

	cin >> n;
	
	while(n--){
		cin >> a;
		v.push_back(a);
		mp[a]++;
	}
	
	for(int i=0;i<v.size();i++){
		rst1 += v[i];
	}
	rst1 = rst1 / v.size();
	
	sort(v.begin(),v.end());
	rst2 = v[(v.size()/2)];
	rst4 = v[v.size()-1] - v[0];
	
	sort(v.begin(),v.end(),cmp);
	
	vector<int> freqVals;
	for (auto &p : mp) freqVals.push_back(p.first);

	sort(freqVals.begin(), freqVals.end(), cmp);

	if (freqVals.size() > 1 && mp[freqVals[0]] == mp[freqVals[1]])
		rst3 = freqVals[1]; 
	else
		rst3 = freqVals[0]; 
	
	if(round(rst1)==-0) cout << 0 << "\n";
	else cout << round(rst1) << "\n";
	cout << rst2 << "\n";
	cout << rst3 << "\n";
	cout << rst4 << "\n";

    return 0;
}
