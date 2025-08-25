#include <bits/stdc++.h>
using namespace std;

int n;

bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

void dfs(int num, int len) {
    if (len == n) {
        cout << num << "\n";
        return;
    }
    for (int d : {1, 3, 5, 7, 9}) {
        int next = num * 10 + d;
        if (isPrime(next)) dfs(next, len + 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    for (int start : {2, 3, 5, 7}) {
        dfs(start, 1);
    }

    return 0;
}
