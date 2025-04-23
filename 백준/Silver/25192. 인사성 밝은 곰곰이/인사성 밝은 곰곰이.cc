#include <bits/stdc++.h>

using namespace std;

int n,rst;
string s;
set<string> se;

int main() {

	cin >> n;
	
	while(n--){
		cin >> s;
		if(s=="ENTER"){
			rst += se.size();
			se.clear();
		}else se.insert(s);		
	}
	rst += se.size();
	cout << rst;
	
    return 0;
}
