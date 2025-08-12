#include<bits/stdc++.h>
using namespace std;

int n;


int main(){
	
	ios::sync_with_stdio(false);
	cin.tie(0);
	
	cin >> n;
	vector<long double> x(n),y(n);
	
	for(int i=0;i<n;i++) cin >> x[i] >> y[i];
	long double s = 0;
	for(int i=0;i<n;i++){
		int j = (i+1)%n;
		s+= x[i] * y[j] - x[j] * y[i];
	}
	long double rst = abs(s) / 2.0;
	cout << fixed << setprecision(1) << rst;
	
    return 0;
}