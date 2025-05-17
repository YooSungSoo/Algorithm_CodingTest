#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    vector<string> words = {"aya", "ye", "woo", "ma"};
    int answer = 0;

    for (string s : babbling) {
        string prev = "";
        bool valid = true;
        while (!s.empty()) {
            bool matched = false;
            for (string w : words) {
                if (s.find(w) == 0 && prev != w) {
                    prev = w;
                    s = s.substr(w.length());
                    matched = true;
                    break;
                }
            }
            if (!matched) {
                valid = false;
                break;
            }
        }
        if (valid) answer++;
    }
    return answer;
}
