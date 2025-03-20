#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> common) {
    
    int answer = 0;
    int s=0;
    
    s = common[1] - common[0];
    if(common[2]-common[1]==s){
        answer =  common[common.size()-1] + s;
    }
    else{
        s = common[1] / common[0];
        answer =  common[common.size()-1] * s;
    }
    
    
    return answer;
}