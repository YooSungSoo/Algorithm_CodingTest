#include <bits/stdc++.h>

using namespace std;

int n,a,b,rst;
string s;
char c;


int main() {
	
	cin >> s >> n;
	
	while(n--){
		char c;
		rst = 0;
		cin >> c >> a >> b;
		
		for(int i=a;i<b+1;i++){
			if(s[i]==c) rst++;
		}
		cout << rst <<"\n";
	}

	return 0;
}
