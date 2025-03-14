#include<bits/stdc++.h>

using namespace std;

string s;
int a,sum;


int main(){
	
	cin >> s;
	int cnt[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};

	for(int i=0;i<s.length();i++){
		a = cnt[s[i] - 'A'];
		sum += a;
	}
	cout << sum;
	return 0;
}