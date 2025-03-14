#include<bits/stdc++.h>

using namespace std;

string s;
int cnt;


int main(){
	
	cin >> s;
	cnt = s.length();
	
	for(int i=0;i<s.length();i++){
		if(s[i]=='c' && s[i+1]== '='){
			cnt--;
		}
		if(s[i]=='c' && s[i+1]== '-'){
			cnt--;
		}
		if(s[i]=='d' && s[i+1]== 'z' && s[i+2]=='='){
			cnt--;
			cnt--;
		}
		if(s[i]=='d' && s[i+1]=='-'){
			cnt--;
		}
		if(s[i]=='l' && s[i+1]=='j'){
			cnt--;
		}
		if(s[i]=='n' && s[i+1]=='j'){
			cnt--;
		}
		if(s[i]=='s' && s[i+1]=='='){
			cnt--;
		}
		if(s[i]=='z' && s[i+1]=='='){
			if(s[i-1]=='d'){
				continue;
			}
			cnt--;
		}
	}
	cout << cnt;
	
	return 0;
}