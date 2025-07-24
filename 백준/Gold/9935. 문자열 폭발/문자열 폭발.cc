#include <bits/stdc++.h>
using namespace std;

string s,p;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> s >> p;
	vector<char> v;
	int plen = p.size();
	
	for(char c : s){
		v.push_back(c);
		
		if(v.size() >= plen){
			bool match = true;
			for(int i = 0;i<plen;i++){
				if(v[v.size() - plen + i] != p[i]){
					match = false;
					break;
				}
			}
			if (match) {
            	for (int i = 0; i < plen; ++i) v.pop_back();
       		}
		}
	}
	
    if (v.empty()) {
        cout << "FRULA";
    } else {
        for (char c : v) cout << c;
    }

    return 0;
}
