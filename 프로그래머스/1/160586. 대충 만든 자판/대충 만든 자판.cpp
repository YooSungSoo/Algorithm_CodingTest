#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    unordered_map<char, int> m;
    vector<int> answer;

    for (const string& key : keymap) {
        for (int i = 0; i < key.size(); i++) {
            char c = key[i];
            if (m.count(c)) {
                m[c] = min(m[c], i + 1);
            } else {
                m[c] = i + 1;
            }
        }
    }
    for (const string& word : targets) {
        int total = 0;
        bool canType = true;
        for (char c : word) {
            if (m.count(c)) {
                total += m[c];
            } else {
                canType = false;
                break;
            }
        }
        answer.push_back(canType ? total : -1);
    }

    return answer;
}
