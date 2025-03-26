#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n;

    vector<int> type(n);
    for (int i = 0; i < n; i++) {
        cin >> type[i];
    }

    deque<int> dq;
    for (int i = 0; i < n; i++) {
        cin >> m;
        if (type[i] == 0) {
            dq.push_front(m); 
        }
    }

    int q;
    cin >> q;
    while (q--) {
        cin >> m;
        dq.push_back(m);  
        cout << dq.front() << " "; 
        dq.pop_front();  
    }

    return 0;
}
