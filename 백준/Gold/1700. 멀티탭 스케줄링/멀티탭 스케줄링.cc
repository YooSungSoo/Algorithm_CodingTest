#include <bits/stdc++.h>

using namespace std;

int n, k, a;
int arr[104];
vector<int> tab;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n >> k;
	vector<int> v;
	
	for(int i=0;i<k;i++){
		cin >> arr[i];
	}
	
	int rst = 0;
		
	for(int i=0;i<k;i++){
		int cur = arr[i];
		
		bool already = false;
		for(int x : tab){
			if(x == cur){
				already = true;
				break;
			}
		}
		
		if(already) continue;
		
		
		if(tab.size() < n){
			tab.push_back(cur);
			continue;	
		}	
		
		int idx_remove = -1;
		int latest = -1;
		
		for(int j=0;j<tab.size();j++){
			int next_time = -1;
			for(int l = i+1;l<k;l++){
				if(arr[l]==tab[j]){
					next_time = l;
					break;
				}
			}
			if(next_time == -1){
				idx_remove = j;
				break;
			}
			
			if(next_time > latest){
				latest = next_time;
				idx_remove = j;
			}
		}
		tab[idx_remove] = cur;
		rst++;
	}
	cout << rst;
	
    return 0;
}
