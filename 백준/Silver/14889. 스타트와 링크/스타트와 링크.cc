#include <bits/stdc++.h>
using namespace std;

int a[20][20];
bool team[20];
int n;
int rst = INT_MAX;

void dfs(int idx, int cnt){
	if(cnt == n/2){
		vector<int> start, link;
		for(int i=0;i<n;i++){
			if(team[i]) start.push_back(i);
			else link.push_back(i);
		}
		int sum_s = 0;
		int sum_l = 0;
		
		for (int i = 0; i < n/2; i++) {
            for (int j = i+1; j < n/2; j++) {
                sum_s += a[start[i]][start[j]] + a[start[j]][start[i]];
                sum_l  += a[link[i]][link[j]] + a[link[j]][link[i]];
            }
        }
        rst = min(rst, abs(sum_s - sum_l));
        return;
	}
	
	for(int i=idx;i < n;i++){
		if(!team[i]){
			team[i] = true;
			dfs(i+1,cnt+1);
			team[i] = false;
		}
	}
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}

	dfs(0,0);
	cout << rst;
	
	return 0;
}