#include<bits/stdc++.h>

using namespace std;

int n, c;
bool k;
string s;

int main(){
	
	cin >> n;
	
	
	for(int i=0;i<n;i++){
		
		cin >> s;
		
		int cnt[26]={0};
		k = true;
		for(int j=0;j<s.length();j++){
			
			if(cnt[s[j]-'a'] == 1 && s[j]!=s[j-1]){
					k = false;
			}
			cnt[s[j]-'a'] = 1;
		}
		if(k==false) c++;
		}
		cout << n-c;
		 
	return 0;
}