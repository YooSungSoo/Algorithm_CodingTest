#include<bits/stdc++.h>

using namespace std;

string s1,s2;
int a,b;


int main(){
	
	cin >> s1 >> s2;
	reverse(s1.begin(),s1.end());
	reverse(s2.begin(),s2.end());
	a = stoi(s1);
	b = stoi(s2);
	
	if(a>b) cout << a;
	else cout << b;
	
	return 0;
}