#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N, L;
    cin >> M >> N >> L;

    vector<int> turrets(M);
    for (int i = 0; i < M; i++) cin >> turrets[i];
    sort(turrets.begin(), turrets.end());

    int answer = 0;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        if (b > L) continue;  

        int diff = L - b;
        int lo = lower_bound(turrets.begin(), turrets.end(), a - diff) - turrets.begin();

        if (lo < M && turrets[lo] <= a + diff) {
            answer++;
        }
    }

    cout << answer << "\n";
    return 0;
}
