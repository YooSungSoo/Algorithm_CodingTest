#include <bits/stdc++.h>

using namespace std;


int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> v(10000001,0);
    for(int i=0;i<tangerine.size();i++){
        v[tangerine[i]]++;
    }
    
    sort(v.begin(),v.end(),greater<>());
    
    for(int i=0;i<tangerine.size();i++){
        k = k - v[i];
        answer ++;
        if(k<=0) break;
    }
    
    
    return answer;
}