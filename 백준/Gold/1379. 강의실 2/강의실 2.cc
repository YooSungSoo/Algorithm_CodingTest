#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    // lectures[i] = {start, end, original_index}
    vector<tuple<int, int, int>> lectures;

    for (int i = 0; i < N; i++) {
        int idx, s, e;
        cin >> idx >> s >> e;
        lectures.push_back({s, e, idx});
    }

    // 시작 시간 기준으로 정렬
    sort(lectures.begin(), lectures.end());

    // 현재 사용 중인 강의실들: {end_time, room_number}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    // 강의 번호 -> 강의실 번호 매핑
    vector<int> room_assign(N + 1);
    int room_cnt = 0;

    for (const auto& lec : lectures) {
        int start = get<0>(lec);
        int end = get<1>(lec);
        int idx = get<2>(lec);

        // 가장 빨리 끝나는 강의실이 사용 가능하면 재사용
        if (!pq.empty() && pq.top().first <= start) {
            int reuse_room = pq.top().second;
            pq.pop();
            room_assign[idx] = reuse_room;
            pq.push({end, reuse_room});
        } else {
            // 새로운 강의실 배정
            room_cnt++;
            room_assign[idx] = room_cnt;
            pq.push({end, room_cnt});
        }
    }

    cout << room_cnt << '\n';
    for (int i = 1; i <= N; i++) {
        cout << room_assign[i] << '\n';
    }

    return 0;
}
