#include<bits/stdc++.h>
using namespace std;
int n,a,b;
int main() {
    
    vector<int> v;
    int rst = 0;
	for(int i=0;i<9;i++){
		cin >> n;
		v.push_back(n);
		rst+=n;
	}
	
	for(int i=0;i<8;i++){
		for(int j=i+1;j<9;j++){
			if(rst - v[i] - v[j]==100){
				a = v[i];
				b = v[j];
			}
		}
	}
	vector<int> v1;
	for(int i=0;i<9;i++){
		if(v[i]==a || v[i]==b) continue;
		else v1.push_back(v[i]);
	}
	sort(v1.begin(),v1.end());
	for(auto i : v1){
		cout << i << "\n";
	}
}