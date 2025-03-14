#include<bits/stdc++.h>

using namespace std;

int n,m;
int a[101][101],b[101][101],s[101][101];

int main(){
	
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			s[i][j] = a[i][j] + b[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout << s[i][j] << " ";
		}
		cout << endl;
	}
	
	return 0;
}