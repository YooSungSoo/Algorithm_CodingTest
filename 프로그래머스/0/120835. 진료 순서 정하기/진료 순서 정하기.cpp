#include <bits/stdc++.h>

using namespace std;



vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<int> copy = emergency;
    map<int,int> m;
    
    sort(copy.begin(),copy.end(),greater<int>());
    
     for (int i = 0; i < copy.size(); ++i) {
        m[copy[i]] = i + 1;
    }
    for (int i = 0; i < emergency.size(); ++i) {
        answer.push_back(m[emergency[i]]);
    }
     
    
    return answer;
}