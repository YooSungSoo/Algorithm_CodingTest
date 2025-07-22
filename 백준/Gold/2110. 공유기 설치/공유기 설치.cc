#include <bits/stdc++.h>
using namespace std;

int n, c;
vector<int> house;

bool canInstall(int d) {
    int cnt = 1;
    int last = house[0];
    for (int i = 1; i < n; i++) {
        if (house[i] - last >= d) {
            cnt++;
            last = house[i];
        }
    }
    return cnt >= c;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> n >> c;
    house.resize(n);
    for (int i = 0; i < n; i++) cin >> house[i];
    sort(house.begin(), house.end());

    int left = 1;
    int right = house[n - 1] - house[0];
    int answer = 0;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (canInstall(mid)) {
            answer = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    cout << answer;
    return 0;
}
