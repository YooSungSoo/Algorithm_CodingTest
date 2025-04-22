#include <bits/stdc++.h>

using namespace std;

int fac(int n) {
    if (n <= 1) return 1;
    return n * fac(n - 1);
}

int main(void) {
    int a, b;
    cin >> a >> b;

    if (b == 0 || b == a) cout << 1;
    else cout << fac(a) / (fac(b) * fac(a - b));
    
    return 0;
}