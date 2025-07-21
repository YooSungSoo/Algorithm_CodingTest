#include <bits/stdc++.h>
using namespace std;

int n, k;
string s;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> k >> s;

	vector<char> stk;
	int remove = k;
	
	for(int i=0;i<n;i++){
		
		while(!stk.empty() && remove > 0 && stk.back() < s[i]){
				
			stk.pop_back();
			remove--;
		}
		stk.push_back(s[i]);
	
	}
	while (remove--) {
        stk.pop_back();
    }
    
     for (char c : stk) {
        cout << c;
    }

    return 0;
}
