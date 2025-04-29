#include <bits/stdc++.h>
using namespace std;

int prefix[26][200001]; 
string s;
int q;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> s >> q;

    for (int i = 0; i < s.size(); i++) {
        for (int j = 0; j < 26; j++) {
            prefix[j][i + 1] = prefix[j][i];
	    }
        prefix[s[i] - 'a'][i + 1]++;
    }

    while (q--) {
        char c;
        int l, r;
        cin >> c >> l >> r;

        int idx = c - 'a';
        cout << prefix[idx][r + 1] - prefix[idx][l] << "\n";
    }

    return 0;
}
