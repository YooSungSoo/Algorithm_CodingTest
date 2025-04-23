#include <bits/stdc++.h>
using namespace std;

int T, n, m;
int dp[31][31];

int comb(int n, int r) {
    if (dp[n][r]) return dp[n][r];
    if (n == r || r == 0) return dp[n][r] = 1;
    return dp[n][r] = comb(n - 1, r - 1) + comb(n - 1, r);
}

int main() {
    cin >> T;
    while (T--) {
        cin >> n >> m;
        cout << comb(m, n) << "\n";
    }
    return 0;
}
