#include <bits/stdc++.h>

using namespace std;

bool isValid(string s) {
    stack<char> stk;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else {
            if (stk.empty()) return false;
            if (c == ')' && stk.top() != '(') return false;
            if (c == ']' && stk.top() != '[') return false;
            if (c == '}' && stk.top() != '{') return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int solution(string s) {
    int answer = 0;
    int n = s.size();

    for (int i = 0; i < n; ++i) {
        string rotated = s.substr(i) + s.substr(0, i);
        if (isValid(rotated)) answer++;
    }

    return answer;
}