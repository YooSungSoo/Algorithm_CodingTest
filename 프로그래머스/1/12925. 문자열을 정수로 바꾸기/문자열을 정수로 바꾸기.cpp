#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s[0]=='+'){
        s.erase(0,1);
        answer = stoi(s);
    }else if(s[0]=='-'){
        s.erase(0,1);
        answer = stoi(s) * -1;
    }else answer = stoi(s);
    return answer;
}