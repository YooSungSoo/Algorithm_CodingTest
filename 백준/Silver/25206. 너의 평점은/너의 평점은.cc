#include<bits/stdc++.h>

using namespace std;

string s;

int main(){
	
	double cnt=0,t=0;
	
	
	for(int i=0;i<20;i++){
		
		getline(cin,s);
		
		if(s[s.length()-2] == 'A' && s[s.length()-1]=='+'){
			t += 4.5 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'A' && s[s.length()-1]=='0'){
			t += 4.0 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'B' && s[s.length()-1]=='+'){
			t += 3.5 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'B' && s[s.length()-1]=='0'){
			t += 3.0 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'C' && s[s.length()-1]=='+'){
			t += 2.5 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'C' && s[s.length()-1]=='0'){
			t += 2.0 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'D' && s[s.length()-1]=='+'){
			t += 1.5 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-2] == 'D' && s[s.length()-1]=='0'){
			t += 1.0 * (s[s.length()-6]-'0');
			cnt += (s[s.length()-6]-'0');
		}
		else if(s[s.length()-1] == 'F'){
			cnt += (s[s.length()-5]-'0');
		}
		
	}
	if(cnt==0) cout << 0;
	else cout <<  t / cnt;
	
	return 0;
}