#include<bits/stdc++.h>

using namespace std;

int n,value,result;
string s;

int main(){
	
	cin >> s>> n;
	
	for(int i=0;i<s.length();i++){
		if(s[i] >='0' && s[i] <='9'){
			value = s[i] - '0';
		}
		else{
			value = s[i] - 'A' +10;
		}
		result = result * n + value;
	}	
	
	cout << result;
	return 0;
}