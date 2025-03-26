#include <bits/stdc++.h>

using namespace std;

int n,m;

int main() {
	
	ios::sync_with_stdio(false);  
    cin.tie(NULL); 

	cin >> n;
	deque<pair<int,int>> d;
	
	for(int i=1;i<=n;i++){
		cin >> m;
		d.push_back({i,m});
	}
	
	while(d.size()!=0){
		cout << d.front().first << " ";
		int move = d.front().second;
		d.pop_front();
		
		if (d.empty()) break;
		if(move>0){
			for (int i = 0; i < move-1; i++) { 
                d.push_back(d.front());
                d.pop_front();
            }
		}else{
			for (int i = 0; i < abs(move); i++) { 
                d.push_front(d.back());
                d.pop_back();
            }
		}
	}
	
    return 0;
}
