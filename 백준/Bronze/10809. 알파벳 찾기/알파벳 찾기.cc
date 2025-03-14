#include<bits/stdc++.h>

using namespace std;

string s;


int main(){
	
	cin >> s;
	vector<int> cnt(26,-1);
	
	for(int i=0;i<s.length();i++){
		if(cnt[s[i]-'a']==-1){
			cnt[s[i] - 'a'] = i;
		}	
	}
	
	for(int i=0;i<26;i++){
		cout << cnt[i] << " ";
	}
	
	return 0;
}