#include <bits/stdc++.h>
using namespace std;

int solution(string dartResult) {
    vector<int> scores;
    int i = 0;

    while (i < dartResult.size()) {
        int score = 0;

        if (dartResult[i] == '1' && dartResult[i+1] == '0') {
            score = 10;
            i += 2;
        } else {
            score = dartResult[i] - '0';
            i++;
        }

        if (dartResult[i] == 'S') score = pow(score, 1);
        else if (dartResult[i] == 'D') score = pow(score, 2);
        else if (dartResult[i] == 'T') score = pow(score, 3);
        i++;

        if (i < dartResult.size() && (dartResult[i] == '*' || dartResult[i] == '#')) {
            if (dartResult[i] == '*') {
                if (!scores.empty()) scores.back() *= 2; 
                score *= 2; // 현재 점수
            } else if (dartResult[i] == '#') {
                score *= -1;
            }
            i++;
        }

        scores.push_back(score);
    }

    return accumulate(scores.begin(), scores.end(), 0);
}
