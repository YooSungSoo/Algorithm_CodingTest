#include <bits/stdc++.h>
using namespace std;

int a=0,b=0,k=0;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> a >> b;
	vector<int> v;
	for(int i=0;i<a;i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(),v.end());
	
	if(v[0]>b){
		cout <<  b;
		return 0;	
	} 
	
	while(1){
		if(v[0]>b || v.empty()) break;
		else{
			v.erase(v.begin());
			b++;
			}
	}
	
	cout << b;
    return 0;
}
