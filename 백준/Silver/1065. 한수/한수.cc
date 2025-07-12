#include <bits/stdc++.h>
using namespace std;

int a,rst;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

	cin >> a;
	int n = 1;
	while(n <= a){
		if(n<100) rst ++;
		else if(n>=100 && n<1000){
			s = to_string(n);
			if(s[1]-s[0]==s[2]-s[1]) rst++;
		}
		n++;
	}
	
	cout << rst;

    return 0;
}
