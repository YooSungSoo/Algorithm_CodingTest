#include <bits/stdc++.h>

using namespace std;

int n;
string s1, s2;


int main(void){
	
	cin >> n;
	for(int i=0;i<n;i++){
		string s1, s2 = "";
		cin >> s1 >> s2;
		int cnt1[26] = {0};
		int cnt2[26] = {0};
		for(int j=0;j<s1.size();j++){
			cnt1[s1[j]- 'a']++;
			cnt2[s2[j]- 'a']++;
		}
		
		bool isSame = true;
		for (int k = 0; k < 26; k++) {
           if (cnt1[k] != cnt2[k]) {
               isSame = false;
               break;
            }
        }
    if(isSame) cout << "Possible" << "\n";
	else cout << "Impossible" << "\n";
	}

	
	return 0;
}
