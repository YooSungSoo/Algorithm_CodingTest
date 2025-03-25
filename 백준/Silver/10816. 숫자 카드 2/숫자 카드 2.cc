#include<bits/stdc++.h>

using namespace std;

int n,m;

int main(void){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> n;
	unordered_map<int,int> map;
	
	for(int i=0;i<n;i++){
		int num;
		cin >> num;
		map[num] ++;
	}
	
	cin >> m;
	vector<int> s(m);
	
	for(int i=0;i<m;i++){
		int num;
		cin >> num;
		s[i] = map[num];
	}
	
	for(int i=0;i<m;i++){
		cout << s[i] << " ";
	}
	  

	return 0;
}  