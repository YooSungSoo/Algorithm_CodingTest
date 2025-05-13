#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    string answer = "";
    string st = "";

    map<string, int> m = {
        {"zero", 0}, {"one", 1}, {"two", 2}, {"three", 3}, {"four", 4},
        {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}
    };

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            st += s[i];
            if (m.find(st) != m.end()) {
                answer += to_string(m[st]);
                st = "";
            }
        } else {
            answer += s[i];
        }
    }
    int a = stoi(answer);
    return a;
}
