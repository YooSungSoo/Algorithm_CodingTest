#include<bits/stdc++.h>

using namespace std;

int n,r,sum,min1;
string s;

int main() {
	
	vector<int> k;
	cin >> n;
	r=0;
	
	while(r<=n){
	sum=0;
	s = to_string(r);
	for(int i=0;i<s.length();i++){
		sum += s[i] - '0';
	}
	if(r + sum == n){
		k.push_back(r);
	}
	r++;
	}
	min1 = 1000000;
	
	for(int i=0;i<k.size();i++){
		if(k[i]<min1) min1 = k[i];
	}
	if(min1 ==1000000) cout << 0;
	else cout << min1;
	
    return 0;
}