#include <bits/stdc++.h>

using namespace std;

int n,rst;
string s1,s2;
set<string> se;

int main() {

	cin >> n;
	while(n--){
		cin >> s1 >> s2;
		if(s1=="ChongChong" || s2=="ChongChong"){
			se.insert(s1);
			se.insert(s2);	
		}
		else if(se.count(s1)) se.insert(s2);
		else if(se.count(s2)) se.insert(s1);
	}
	rst = se.size();
	cout << rst;
	
    return 0;
}
