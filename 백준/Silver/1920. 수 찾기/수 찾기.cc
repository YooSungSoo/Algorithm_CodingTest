#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,m,k,l;

ll binary_search(vector<int>& arr, ll left, ll right, ll target){
	if(left > right) return -1;
	int mid = (left + right) / 2;
	if(arr[mid]== target) return mid;
	
	else if(target < arr[mid]) 
		return binary_search(arr,left,mid-1,target);
	else 
		return binary_search(arr, mid +1, right, target);
	
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

	cin >> n;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}
	
	sort(v.begin(),v.end());
	
	cin >> m;
	
	for(int i=0;i<m;i++){
		cin >> l;
		
		if(binary_search(v,0,n-1,l) != -1) cout << 1 << "\n";
		else cout << 0 << "\n";
		
	}

    return 0;
}
