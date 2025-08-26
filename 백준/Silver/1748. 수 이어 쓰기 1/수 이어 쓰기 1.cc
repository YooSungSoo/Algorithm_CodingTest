#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long rst = 0;
    int len = 1;
    int start = 1;

    while (start * 10 <= n) {
        rst += (long long)(start * 10 - start) * len;
        start *= 10;
        len++;
    }

    rst += (long long)(n - start + 1) * len;

    cout << rst << '\n';
    return 0;
}
