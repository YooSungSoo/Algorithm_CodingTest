#include <bits/stdc++.h>

using namespace std;

int n, k, rst;
int cnt1[6], cnt2[6];

int main(void){
	
	cin >> n >> k;
	for(int i=0;i<n;i++){
		int a = 0;
		int b = 0;
		cin >> a >> b;
		if(a==0) cnt1[b-1]++;
		if(a==1) cnt2[b-1]++;
	}

	for(int i=0;i<6;i++){
		if(cnt1[i] % k ==0)rst += cnt1[i] / k;
		else {
			rst += cnt1[i] / k; 
			rst ++;
		}
	}
	for(int i=0;i<6;i++){
		if(cnt2[i] % k ==0)rst += cnt2[i] / k;
		else {
			rst += cnt2[i] / k; 
			rst ++;
		}
	}


	cout << rst;
	return 0;
}
