#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> as;
    int answer = 0;
    int a = 0;
    
    for(int i=0;i<sizes.size();i++){
        for(int j=0;j<sizes[0].size();j++){
            a = max(sizes[i][j],a);
        }
    }
    for(int i=0;i<sizes.size();i++){
        int b = 10000;
        for(int j=0;j<sizes[0].size();j++){
            b = min(sizes[i][j],b);
        }
        as.push_back(b);
    }
    sort(as.begin(),as.end());
    answer = a * as[as.size()-1];
    
    return answer;
}