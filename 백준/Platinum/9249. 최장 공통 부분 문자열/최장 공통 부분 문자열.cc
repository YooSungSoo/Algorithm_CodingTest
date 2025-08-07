#include <bits/stdc++.h>
using namespace std;

/*
 * 문제: 두 문자열 A, B에서 공통으로 등장하는 문자열 중
 * 가장 긴 부분 문자열의 길이 및 예시 하나를 출력하라.
 * 문자열 길이 합이 최대 200,000인 입력에 대해 O(N log N) 접근 필요.
 */

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string A, B;
    cin >> A >> B;
    int al = A.size();
    string S = A + char('z' + 1) + B; 
    // 구분자(> 'z')를 넣어 A, B 사이의 접미사 구분

    int N = S.size();
    vector<int> sa(N), rank_arr(N), tmp(N);
    iota(sa.begin(), sa.end(), 0);
    for (int i = 0; i < N; i++) rank_arr[i] = S[i];

    // 1) 접미사 배열 생성 (Manber-Myers, O(N log N))
    for (int k = 1;; k <<= 1) {
        auto cmp = [&](int i, int j) {
            if (rank_arr[i] != rank_arr[j]) return rank_arr[i] < rank_arr[j];
            int ri = (i + k < N ? rank_arr[i + k] : -1);
            int rj = (j + k < N ? rank_arr[j + k] : -1);
            return ri < rj;
        };
        sort(sa.begin(), sa.end(), cmp);

        tmp[sa[0]] = 0;
        for (int i = 1; i < N; i++) {
            tmp[sa[i]] = tmp[sa[i - 1]] + cmp(sa[i - 1], sa[i]);
        }
        rank_arr = tmp;

        if (rank_arr[sa[N - 1]] == N - 1) break; // 완전 정렬되면 종료
    }

    // 2) LCP 배열 생성 (Kasai 알고리즘, O(N))
    vector<int> lcp(N), inv(N);
    for (int i = 0; i < N; i++) inv[sa[i]] = i;
    int h = 0;
    for (int i = 0; i < N; i++) {
        if (inv[i] > 0) {
            int j = sa[inv[i] - 1];
            while (i + h < N && j + h < N && S[i + h] == S[j + h]) h++;
            lcp[inv[i]] = h;
            if (h > 0) h--;
        }
    }

    // 3) 인접한 SA pair 중 하나는 A 영역, 다른 하나는 B 영역일 때 최대 LCP 탐색
    int best = 0, idx = 0;
    for (int i = 1; i < N; i++) {
        bool oneInA = sa[i - 1] < al;
        bool otherInB = sa[i] > al;
        bool oneInB = sa[i - 1] > al;
        bool otherInA = sa[i] < al;
        if ((oneInA && otherInB) || (oneInB && otherInA)) {
            if (lcp[i] > best) {
                best = lcp[i];
                idx = sa[i];
            }
        }
    }

    // 결과 출력
    cout << best << "\n";
    if (best > 0) {
        cout << S.substr(idx, best) << "\n";
    }

    return 0;
}
