#include <bits/stdc++.h>
using namespace std;

long long solution(int n) {
    long long a = 1, b = 1;

    for (int i = 2; i <= n; ++i) {
        long long tmp = (a + b) % 1234567;
        a = b;
        b = tmp;
    }
    return b;
}
