#include<bits/stdc++.h>

using namespace std;

string s,r;

int main(){
	
	char a[5][15];
	
	for(int i=0;i<5;i++){
		cin >> s;
		for(int j=0;j<s.length();j++){
			a[i][j] = s[j];
		}
		for(int j=s.length();j<15;j++){
			a[i][j] = ' ';
		}
	}
	
	for(int i=0;i<15;i++){
		for(int j=0;j<5;j++){
			if(a[j][i]!= ' '){
				r +=a[j][i];
			}
	}
}
	cout << r;
	
	return 0;
}