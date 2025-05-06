#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> avg;

    for (int i = 0; i < score.size(); i++) {
        avg.push_back((score[i][0] + score[i][1]));
    }

    vector<int> sorted = avg;
    sort(sorted.begin(), sorted.end(), greater<int>());

    unordered_map<int, int> rank;
    for (int i = 0; i < sorted.size(); i++) {
        if (rank.find(sorted[i]) == rank.end()) {
            rank[sorted[i]] = i + 1;
        }
    }

    for (int i = 0; i < avg.size(); i++) {
        answer.push_back(rank[avg[i]]);
    }

    return answer;
}
