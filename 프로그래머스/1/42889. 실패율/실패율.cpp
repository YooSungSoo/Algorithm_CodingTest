#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, double> a, pair<int, double> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    vector<pair<int, double>> failureRates;

    vector<int> count(N + 2, 0); 
    
    for (int s : stages) {
        count[s]++;
    }

    int total = stages.size();
    
    for (int i = 1; i <= N; i++) {
        if (total == 0) {
            failureRates.push_back({i, 0});
        } else {
            double failRate = (double)count[i] / total;
            failureRates.push_back({i, failRate});
            total -= count[i];
        }
    }

    sort(failureRates.begin(), failureRates.end(), cmp);

    for (auto p : failureRates) {
        answer.push_back(p.first);
    }

    return answer;
}
