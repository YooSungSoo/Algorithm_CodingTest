#include <bits/stdc++.h>
using namespace std;

bool isPal(const string& s, int l) {
    int r = (int)s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) return false;
        ++l; --r;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s; 
    cin >> s;
    int n = s.size();

    int ans = 2 * n;                 // upper bound
    for (int i = 0; i < n; ++i) {
        if (isPal(s, i)) {           // s[i..n-1]가 팰린드롬이면
            ans = n + i;             // 앞부분 i글자를 뒤에 붙이면 완성
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}
