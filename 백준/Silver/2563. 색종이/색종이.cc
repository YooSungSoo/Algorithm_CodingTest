#include<bits/stdc++.h>

using namespace std;

int n,x,y,cnt;

int main(){
	
	int a[100][100] = {0};
	cin >> n;
	
	for(int i=0;i<n;i++){
		cin >> x >> y;
		for(int j=x;j<x+10;j++){
			for(int k=y;k<y+10;k++){
				a[j][k]=1;
			}
		}
	}
	
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(a[i][j]==1) cnt++;
		}
	}
	cout << cnt;
	return 0;
}