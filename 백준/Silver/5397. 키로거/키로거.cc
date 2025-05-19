#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string str;
        cin >> str;

        list<char> L;
        auto cursor = L.begin();

        for (char ch : str) {
            if (ch == '<') {
                if (cursor != L.begin()) cursor--;
            } else if (ch == '>') {
                if (cursor != L.end()) cursor++;
            } else if (ch == '-') {
                if (cursor != L.begin()) {
                    cursor = L.erase(--cursor);
                }
            } else {
                L.insert(cursor, ch);
            }
        }

        for (char c : L) cout << c;
        cout << '\n';
    }

    return 0;
}
