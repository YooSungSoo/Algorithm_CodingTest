#include <bits/stdc++.h>

using namespace std;

int n,cnt[26];
string s,b;

int main() {
	
	cin >> n;
	vector<string> a(n);
	
	for(int i=0;i<n;i++){
		cin >> s;
		cnt[s[0]-'a']++;
	}
	
	for(int i=0;i<26;i++){
		if(cnt[i]>4){
			b +=  i + 'a';
		}
	}
	if(b.length()==0) cout << "PREDAJA";
	else cout << b;
}
