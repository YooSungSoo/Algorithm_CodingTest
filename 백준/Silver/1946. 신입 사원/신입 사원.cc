#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T; 

    while (T--) {
        int n;
        cin >> n;
        vector<pair<int, int>> applicants(n);

        for (int i = 0; i < n; i++) {
            cin >> applicants[i].first >> applicants[i].second;
        }

        sort(applicants.begin(), applicants.end());

        int selected = 1;
        int best_interview = applicants[0].second;

        for (int i = 1; i < n; i++) {
            if (applicants[i].second < best_interview) {
                selected++;
                best_interview = applicants[i].second;
            }
        }

        cout << selected << '\n';
    }

    return 0;
}
