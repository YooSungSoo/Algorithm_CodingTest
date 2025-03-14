#include<bits/stdc++.h>

using namespace std;

int n;

int main(){
	
	vector<int> a = {1,1,2,2,2,8};
	
	for(int i=0;i<6;i++){
		cin >> n;
		a[i] -= n;
	}
	for(int i=0;i<6;i++){
		cout << a[i] << " ";
	}
	
	return 0;
}