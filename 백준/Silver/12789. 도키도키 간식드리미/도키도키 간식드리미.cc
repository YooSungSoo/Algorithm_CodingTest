#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    stack<int> stk;
    int expected = 1; 
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        stk.push(x);

        while (!stk.empty() && stk.top() == expected) {
            stk.pop();
            expected++;
        }
    }

    if (expected == n + 1) {
        cout << "Nice" << "\n";
    } else {
        cout << "Sad" << "\n";
    }

    return 0;
}
