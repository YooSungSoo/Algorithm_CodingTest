#include<bits/stdc++.h>

using namespace std;

string s;
int cnt;


int main(){
	
	getline(cin,s);
	for(int i=0;i<s.length();i++){
		if(s[i] == ' ') cnt++;
		
	}
	if(s[0]==' ') cnt--;
	if(s[s.length()-1]==' ') cnt --;

	cout << cnt + 1 ;
	
	return 0;
}