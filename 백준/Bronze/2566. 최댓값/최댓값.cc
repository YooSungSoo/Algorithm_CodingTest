#include<bits/stdc++.h>

using namespace std;

int m,q,w;

int main(){
	
	int a[9][9];
	m = -1;
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			cin >> a[i][j];
		}
	}
	
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(a[i][j]>m){
				 m = a[i][j];
				 q=i+1;
				 w=j+1;
			}
		}
	}
	cout << m << endl;
	cout << q << " " << w;
	
	return 0;
}