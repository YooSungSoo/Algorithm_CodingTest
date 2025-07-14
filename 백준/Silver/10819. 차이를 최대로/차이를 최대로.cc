#include<bits/stdc++.h>
using namespace std;
int n,k;
int main() {
    
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++){
    	cin >> k;
    	v.push_back(k);
	}

	sort(v.begin(), v.end());
	int c = 0;
	int rst = 0;

	do{
		for(int i=0;i<n-1;i++){
			c += abs(v[i] - v[i+1]);
		}
		if(abs(c) > rst) rst = abs(c);
		c = 0;
		
	}while(next_permutation(v.begin(),v.end()));

	cout << rst;
}