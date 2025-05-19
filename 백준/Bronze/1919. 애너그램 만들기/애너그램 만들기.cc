#include <bits/stdc++.h>

using namespace std;

string s1, s2;
int cnt1[26], cnt2[26];
int rst;

int main(void){
	
	cin >> s1 >> s2;
	
	for(int i=0;i<s1.size();i++){
		cnt1[s1[i]-'a']++;
	}
	for(int i=0;i<s2.size();i++){
		cnt2[s2[i]-'a']++;
	}
	for(int i=0;i<26;i++){
		if(cnt1[i] == 0) rst += cnt2[i];
		else if(cnt2[i] == 0) rst += cnt1[i];
		else if(cnt1[i] > cnt2[i]) rst += cnt1[i] - cnt2[i];
		else if(cnt1[i] < cnt2[i]) rst += cnt2[i] - cnt1[i];
	}
	cout << rst;
	return 0;
}
