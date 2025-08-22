#include <bits/stdc++.h>
using namespace std;

struct Cmp {
    bool operator()(long long a, long long b) const {
        long long aa = llabs(a), bb = llabs(b);
        if (aa != bb) return aa > bb;
        return a > b;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; 
    cin >> N;
    priority_queue<long long, vector<long long>, Cmp> pq;

    while (N--) {
        long long x; 
        cin >> x;
        if (x != 0) pq.push(x);
        else {
            if (pq.empty()) cout << 0 << '\n';
            else {
                cout << pq.top() << '\n';
                pq.pop();
            }
        }
    }
    return 0;
}
