#include <bits/stdc++.h>
using namespace std;

int n;
int nums[12];
int ops[4];
int minResult = INT_MAX;
int maxResult = INT_MIN;

void dfs(int idx, int result) {
    if (idx == n) {
        minResult = min(minResult, result);
        maxResult = max(maxResult, result);
        return;
    }

    for (int i = 0; i < 4; i++) {
        if (ops[i] > 0) {
            ops[i]--;

            if (i == 0) dfs(idx + 1, result + nums[idx]);
            else if (i == 1) dfs(idx + 1, result - nums[idx]);
            else if (i == 2) dfs(idx + 1, result * nums[idx]);
            else {
                if (result < 0)
                    dfs(idx + 1, -(-result / nums[idx])); 
                else
                    dfs(idx + 1, result / nums[idx]);
            }

            ops[i]++;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> ops[i]; 
    }

    dfs(1, nums[0]);

    cout << maxResult << '\n';
    cout << minResult << '\n';

    return 0;
}
