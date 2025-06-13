#include <bits/stdc++.h>
using namespace std;

int solution(string s)
{
    int answer = -1;
    stack<int> stk;
    for(int i=0;i<s.size();i++){
        if(!stk.empty() && stk.top()==s[i]) stk.pop();
        else stk.push(s[i]);
    }
    
    if(stk.empty()) answer = 1;
    else answer = 0;
    
    return answer;
}