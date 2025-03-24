#include<bits/stdc++.h> 

using namespace std; 

int n,a;
int cnt[10001] = {0};

int main() {
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		cnt[a]++;
	}
	for(int i=0;i<10001;i++){
		while(cnt[i]--){
			cout << i << "\n";
		}
	}
	
	return 0;
}