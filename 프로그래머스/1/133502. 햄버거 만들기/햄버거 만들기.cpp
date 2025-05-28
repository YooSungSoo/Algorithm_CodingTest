#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> s;
    for(int i=0;i<ingredient.size();i++){
        s.push_back(ingredient[i]);
        int ss = s.size();
        if(ss >= 4 && s[ss-4]==1 && s[ss-3]==2 && s[ss-2]==3 && s[ss-1]==1){
            answer ++;
            s.pop_back();
            s.pop_back();
            s.pop_back();
            s.pop_back();
        }
    }
    return answer;
}