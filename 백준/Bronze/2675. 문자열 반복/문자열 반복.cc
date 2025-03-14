#include<bits/stdc++.h>

using namespace std;

int n,k;
string s, temp;


int main(){
	
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> k >> s;
		for(int j=0;j<s.length();j++){
			for(int q=0;q<k;q++){
				temp += s[j];
			}
		}
		cout << temp << endl;
		temp = "";
	}

	
	return 0;
}