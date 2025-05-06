#include <bits/stdc++.h>

using namespace std;

bool isThree(int a){
    if(a%3==0) return true;
    string s = to_string(a);
    for(int i=0;i<s.size();i++){
        if(s[i]=='3') return true;
    }
    return false;
}

int solution(int n) {
    int answer = 0;
    int cnt = 0;
    int a = 1;
    while(1){
        if(isThree(a) ==false){
            cnt++;
            if(cnt == n) return a;
        }
        a++;
    }
    answer = cnt;
    return answer;
}