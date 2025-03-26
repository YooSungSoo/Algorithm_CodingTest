#include<bits/stdc++.h>

using namespace std;

int n,m;


int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	vector<int> gaps(n-1);
	
	for(int i=0;i<n-1;i++){
			gaps[i] = a[i+1] - a[i];
	}
	
	int gapGCD = gaps[0];
	
	for(int i=0;i<gaps.size();i++){
		gapGCD = gcd(gapGCD, gaps[i]);
	}
	 int cnt = ((a.back() - a.front()) / gapGCD) - (n - 1);
    cout << cnt << '\n';
	
	return 0;
}  