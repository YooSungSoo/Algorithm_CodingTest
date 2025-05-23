#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> st;
    int result = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            st.push('(');
        } else {
            st.pop(); 
            if (s[i - 1] == '(') {
                result += st.size();
            } else {
                result += 1;
            }
        }
    }

    cout << result << '\n';
    return 0;
}
