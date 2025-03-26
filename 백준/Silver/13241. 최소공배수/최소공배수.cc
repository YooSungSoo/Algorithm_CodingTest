#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b;
    cin >> a >> b;

    cout << (a / gcd(a, b)) * b << '\n';

    return 0;
}
