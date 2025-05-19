#include <bits/stdc++.h>

using namespace std;

int a,m;
int g[10];

int main(void){
	
	cin >> a;
	string s = to_string(a);
	for(int i=0;i<s.size();i++){
		if(s[i]-'0' == 6 || s[i]  - '0'== 9) g[6]++;
		else g[s[i] - '0']++;
	}
	g[6] = (g[6] / 2) + (g[6] % 2);
	
	for(int i=0;i<10;i++){
		m = max(m,g[i]);
	}
	
	cout << m;
	return 0;
}
