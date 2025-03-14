#include<bits/stdc++.h>

using namespace std;

int n;


int main(){

	vector<int> cnt(42,0);
	int a=0;
	
	for(int i=0;i<10;i++){
		cin >> n;
		cnt[n%42]++;	
	}
	
	for(int i=0;i<42;i++){
		if(cnt[i]!=0) a++;
	}
	cout << a;
	
	return 0;
}