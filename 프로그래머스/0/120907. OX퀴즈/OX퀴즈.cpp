#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;

    for (int i = 0; i < quiz.size(); i++) {
        stringstream ss(quiz[i]);
        int a, b, result;
        string op, eq;

        ss >> a >> op >> b >> eq >> result;

        if (op == "-") {
            if (a - b == result) answer.push_back("O");
            else answer.push_back("X");
        } else if (op == "+") {
            if (a + b == result) answer.push_back("O");
            else answer.push_back("X");
        }
    }

    return answer;
}
