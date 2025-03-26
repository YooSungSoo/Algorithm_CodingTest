#include <bits/stdc++.h>

using namespace std;

int n,m,x;

int main() {
	
	ios::sync_with_stdio(false);  
    cin.tie(NULL); 

	cin >> n;
	deque<int> d;
	
	while(n--){
		cin >> m;
		if(m==1){
			cin >> x;
			d.push_front(x);
		}else if(m==2){
			cin >> x;
			d.push_back(x);
		}else if(m==3){
			if(!d.empty()){
				cout << d.front() << "\n";
				d.pop_front();
			}else cout << "-1" << "\n";
		}else if(m==4){
			if(!d.empty()){
				cout << d.back() << "\n";
				d.pop_back();
			}else cout << "-1" << "\n";
		}else if(m==5){
			cout << d.size() << "\n";
		}else if(m==6){
			if(d.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}else if(m==7){
			if(!d.empty()){
				cout << d.front() << "\n";
			}else cout << "-1" << "\n";
		}else if(m==8){
			if(!d.empty()){
				cout << d.back() << "\n";
			}else cout << "-1" << "\n";
		}
	}
		
    return 0;
}
