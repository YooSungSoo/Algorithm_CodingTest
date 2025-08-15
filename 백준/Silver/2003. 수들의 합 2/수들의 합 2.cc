#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N; long long M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    long long cnt = 0, sum = 0;
    int r = 0;
    for (int l = 0; l < N; ++l) {
        while (r < N && sum < M) sum += A[r++];
        if (sum == M) cnt++;
        sum -= A[l];
    }

    cout << cnt << '\n';
    return 0;
}