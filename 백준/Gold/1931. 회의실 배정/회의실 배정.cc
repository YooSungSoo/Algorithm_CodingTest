#include <bits/stdc++.h>
using namespace std;

int a, b, n;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    vector<pair<int,int>> v;
    
    for(int i=0;i<n;i++){
    	cin >> a >> b;
    	v.push_back({a,b});
	}
	sort(v.begin(),v.end(),cmp);
	
	int start = 0;
	int end = v[0].second;
	int rst = 1;
	
	for(int i=1;i<n;i++){
		if(v[i].first >= end){
			rst ++;
			end = v[i].second;	
		}
	}
	
	cout << rst;
	
    return 0;
}
