#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {

	while(cin >> n){
		int cnt =1, ret=1;
		while(1){
			if(cnt %n==0){
				cout << ret;
				break;
			}else {
				cnt = (cnt*10)+1;
				cnt = cnt % n;
				ret++;
			}
		}
		cout << "\n";
	}
	
	return 0;
}