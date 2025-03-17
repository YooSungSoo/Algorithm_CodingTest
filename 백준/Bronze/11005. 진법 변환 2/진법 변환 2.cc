#include<bits/stdc++.h>

using namespace std;

int n,b;
string s;

int main(){
	
	cin >> n >> b;
	
	while(n>0){
		int r = n % b;
		
		if(r < 10){
			s += (r + '0');
		}
		else{
			s+=(r+'A'-10);
		}
		n /=b;
	}
	reverse(s.begin(),s.end());
	cout << s;
	return 0;
}