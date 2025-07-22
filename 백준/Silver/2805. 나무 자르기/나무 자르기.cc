#include<bits/stdc++.h>

using namespace	std;

int n,m,k;
int max_tree;
vector<int> trees;

bool is_enough(int l){
	long long sum = 0;
	for(auto tree : trees){
		if(tree > l)sum += tree - l; 
	}
	return sum >= m;
}

int main(){
	
	cin >> n >> m;
	
	for(int i=0;i<n;i++){
		cin >> k;
		trees.push_back(k);
		if(k>max_tree) max_tree = k;
	}
	
	int left = 0;
	int right = max_tree;
	int rst = 0;
	
	while(left<=right){
		
		int mid = (left + right) / 2;
		
		if(is_enough(mid)){
			rst = mid;
			left = mid + 1;
			
		}else{
			right = mid -1;
		}
	}
	cout << rst;
	
	return 0;
}