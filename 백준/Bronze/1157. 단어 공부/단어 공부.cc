#include<bits/stdc++.h>

using namespace std;

string s,t;
int cnt[26],max1,a;


int main(){
	
	cin >> s;
	
	for(int i=0;i<s.length();i++){
		if(s[i]<='Z' && s[i] >='A'){
			cnt[s[i] - 'A']++;
		}else if (s[i]<='z' && s[i]>='a'){
			cnt[s[i] - 'a']++;
		}
	}
	max1 = 0;
	
	for(int i=0;i<26;i++){
		if(cnt[i] > max1) max1 = cnt[i];
	}
	
	for(int i=0;i<26;i++){
		if(cnt[i]==max1) {
			t= char(i + 'A');
			a++;
		}
	}
	if(a==1) cout << t;
	else cout << "?";
	return 0;
}