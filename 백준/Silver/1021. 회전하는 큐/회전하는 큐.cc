#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    deque<int> dq;
    vector<int> target(m);
    for (int i = 1; i <= n; i++) {
        dq.push_back(i);
    }
    for (int i = 0; i < m; i++) {
        cin >> target[i];
    }

    int answer = 0;
    for (int i = 0; i < m; i++) {
        int idx = 0;
        for (int j = 0; j < dq.size(); j++) {
            if (dq[j] == target[i]) {
                idx = j;
                break;
            }
        }

        if (idx <= dq.size() / 2) {
            while (idx--) {
                dq.push_back(dq.front());
                dq.pop_front();
                answer++;
            }
        } else {
            int cnt = dq.size() - idx;
            while (cnt--) {
                dq.push_front(dq.back());
                dq.pop_back();
                answer++;
            }
        }

        dq.pop_front();
    }

    cout << answer << '\n';
    return 0;
}
