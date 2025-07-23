#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 커스텀 정렬: 같은 위치에서는 시작점(-1)이 끝점(+1)보다 먼저 오도록
bool compare(const pair<ll, int>& a, const pair<ll, int>& b) {
    if (a.first == b.first) return a.second > b.second;
    return a.first < b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;

    vector<pair<ll, int>> events; // (좌표, -1: 시작점 / +1: 끝점)

    for (int i = 0; i < N; ++i) {
        ll x, r;
        cin >> x >> r;
        events.emplace_back(x - r, -1); // 시작점
        events.emplace_back(x + r, 1);  // 끝점
    }

    // 좌표 기준 정렬
    sort(events.begin(), events.end(), compare);

    stack<int> states; // 상태 저장: 0=기본, -1=시작됨, 1=접함
    ll last = -1;
    int result = 0;

    for (auto& e : events) {
        ll pos = e.first;
        int type = e.second;

        if (type == -1) { // 시작점
            if (!states.empty() && pos == last) {
                int prev = states.top(); states.pop();
                if (prev != -1) prev = 1; // 접한 상태로 마킹
                states.push(prev);
                states.push(0);
            } else {
                if (!states.empty()) {
                    int prev = states.top(); states.pop();
                    prev = -1;
                    states.push(prev);
                }
                states.push(0);
            }
            last = pos;
        }
        else { // 끝점
            int top = states.top(); states.pop();
            if (top == 1 && pos == last) {
                result += 2; // 접한 원
            } else {
                result += 1; // 일반적인 끝점
            }
            last = pos;
        }
    }

    cout << result + 1 << "\n"; // 외부 영역 1개 더함
    return 0;
}
