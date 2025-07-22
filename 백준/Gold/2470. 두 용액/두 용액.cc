#include<bits/stdc++.h>

using namespace std;

int n,k;

int main(void){
	
	cin >> n;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(),v.end());
	
	int left = 0;
	int right = n - 1;
	int l = 0;
	int r = 0;
	int min_v = INT_MAX;
	
	while(left < right){
		
		int sum = v[left] + v[right];
		
		if(abs(sum) < min_v){
			min_v = abs(sum);
			l = v[left];
			r = v[right];
		}
		
		if(sum > 0) right--;
		else left++;
		
	}
	
	cout << l << " " << r;
	
	return 0;
}