#include <bits/stdc++.h>

using namespace std;

int n,m;
string s;
char a[54][54];
int visited[54][54];
int dy[4] = {-1,0,1,0};
int dx[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int rst = 0;
	bool flag = false;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j]=='-'){
				flag = true;
			}
			if(a[i][j]=='|'){
				if(flag==true) rst++;
				flag = false;
			}
		}
		if(flag == true) rst++;
		flag = false;
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[j][i]=='|'){
				flag = true;
			}
			if(a[j][i]=='-'){
				if(flag==true) rst++;
				flag = false;
			}
		}
		if(flag == true) rst++;
		flag = false;
	}

	cout << rst;
	
    return 0;
}
