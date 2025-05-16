#include <bits/stdc++.h>
using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;

    sort(score.begin(), score.end(), greater<int>()); 
    
    for (int i = 0; i + m - 1 < score.size(); i += m) {
        int min_score = score[i + m - 1];
        answer += min_score * m;
    }

    return answer;
}
