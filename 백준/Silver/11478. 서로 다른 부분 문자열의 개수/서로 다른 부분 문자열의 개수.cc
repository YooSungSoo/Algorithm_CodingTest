#include<bits/stdc++.h>

using namespace std;

string s;

int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	cin >> s;
	set<string> substrings;
	
	for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j <= s.size(); j++) {
            substrings.insert(s.substr(i, j - i));
        }
    }
    
    cout << substrings.size() << endl;
    
	return 0;
}  