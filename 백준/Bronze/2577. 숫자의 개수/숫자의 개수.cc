#include <bits/stdc++.h>

using namespace std;

int a, b, c;
int g[10];

int main(void){
	
	cin >> a >> b >> c;
	int k = a*b*c;
	string s = to_string(k);
	for(int i=0;i<s.size();i++){
		g[s[i] - '0']++;
	}
	for(int i=0;i<10;i++){
		cout << g[i] << "\n";
	}

	return 0;
}
