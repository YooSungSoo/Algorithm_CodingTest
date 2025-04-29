#include <bits/stdc++.h>

using namespace std;

int n,m,q,w,e,r,rst;
int a[1025][1025],psum[1025][1025];

int main(void){
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> m;
	
	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            psum[i][j] = a[i][j] + psum[i - 1][j] + psum[i][j - 1] - psum[i - 1][j - 1];
        }
    }
	
	while(m--){
		
		cin >> q >> w >> e >> r;
		
	    int rst = psum[e][r] - psum[q - 1][r] - psum[e][w - 1] + psum[q - 1][w - 1];
        cout << rst << "\n";
	}
	
	return 0;
}