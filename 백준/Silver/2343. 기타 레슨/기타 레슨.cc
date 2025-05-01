#include <bits/stdc++.h>

using namespace std;

long long n,m,a[100004],mx;
int lo, hi, sum, rst;

bool check(int mid){
	if(mx>mid) return false;
	int temp = mid;
	int num = 0;
	for(int i=0;i<n;i++){
		if(mid - a[i] < 0){
			mid = temp;
			num++;
		}
		mid-=a[i];
	}
	if(mid != temp) num++;
	
	return num <=m;
}

int main(void){
	
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
		mx = max(mx,a[i]);
	}
	lo = 0; hi = sum;
	
	while(lo<=hi){
		int mid = (lo + hi) / 2;
		if(check(mid)){
			hi = mid -1;
			rst = mid;
		}else lo = mid +1;
	}
	
	cout << rst;
	return 0;
}