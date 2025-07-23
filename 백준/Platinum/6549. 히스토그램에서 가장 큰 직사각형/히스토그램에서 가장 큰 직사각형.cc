#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true) {
        int n;
        cin >> n;

        // 입력이 0이면 종료
        if (n == 0) break;

        vector<ll> heights(n); // 히스토그램 막대 높이 배열

        // 히스토그램 막대 높이 입력
        for (int i = 0; i < n; ++i) {
            cin >> heights[i];
        }

        stack<int> st;        // 막대의 인덱스를 저장할 스택
        ll max_area = 0;      // 최대 넓이 결과 저장 변수

        // 전체 막대를 순회
        for (int i = 0; i < n; ++i) {
            // 현재 막대가 스택의 top 막대보다 낮으면
            // 이전 막대들로 만들 수 있는 최대 넓이 계산
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int top = st.top();   // 꺼낼 막대의 인덱스
                st.pop();

                // 폭 계산: 스택이 비었으면 왼쪽 끝은 -1, 아니면 st.top() 다음부터
                ll width = st.empty() ? i : i - st.top() - 1;

                // 최대 넓이 갱신
                max_area = max(max_area, heights[top] * width);
            }

            // 현재 인덱스를 스택에 push
            st.push(i);
        }

        // 스택에 남은 인덱스들도 마저 계산
        while (!st.empty()) {
            int top = st.top();
            st.pop();

            ll width = st.empty() ? n : n - st.top() - 1;

            max_area = max(max_area, heights[top] * width);
        }

        // 결과 출력
        cout << max_area << '\n';
    }

    return 0;
}
