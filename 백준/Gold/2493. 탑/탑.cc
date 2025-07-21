#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie();

    int n;
    cin >> n;

    vector<int> heights(n);
    for(int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    stack<pair<int, int>> stk;
    vector<int> result(n);

    for(int i = 0; i < n; i++) {
        while(!stk.empty() && stk.top().second < heights[i]) {
            stk.pop();
        }

        if(!stk.empty()) {
            result[i] = stk.top().first; 
        } else {
            result[i] = 0; 
        }

        stk.push({i + 1, heights[i]});
    }

    for(int i = 0; i < n; i++) {
        cout << result[i] << ' ';
    }

    return 0;
}
