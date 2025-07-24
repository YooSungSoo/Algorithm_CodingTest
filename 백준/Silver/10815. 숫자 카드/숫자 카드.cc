#include <bits/stdc++.h>
using namespace std;

int n, k;
int a, b;

bool cal(vector<int> &arr, int target){
	int left = 0, right = arr.size() - 1;
	
	while(left<=right){
		int mid = (left + right) / 2;
		if(target == arr[mid]) return true;
		else if(arr[mid] < target) left = mid + 1;
		else right = mid - 1;
	}
	return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	vector<int> v;
	
	for(int i=0;i<n;i++){
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(),v.end());
	
	cin >> a;
	string result;
	while(a--){
		cin >> b;
		result += (cal(v,b) ? "1 " : "0 ");
	}
	
	cout << result << "\n";
    return 0;
}
