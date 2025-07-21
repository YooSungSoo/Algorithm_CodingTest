#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    stack<char> stk;
    int result = 0;
    int temp = 1;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            stk.push('(');
            temp *= 2;
        }
        else if (s[i] == '[') {
            stk.push('[');
            temp *= 3;
        }
        else if (s[i] == ')') {
            if (stk.empty() || stk.top() != '(') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '(') result += temp;
            stk.pop();
            temp /= 2;
        }
        else if (s[i] == ']') {
            if (stk.empty() || stk.top() != '[') {
                cout << 0;
                return 0;
            }
            if (s[i - 1] == '[') result += temp;
            stk.pop();
            temp /= 3;
        }
    }

    if (!stk.empty()) {
        cout << 0;
    } else {
        cout << result;
    }

    return 0;
}
