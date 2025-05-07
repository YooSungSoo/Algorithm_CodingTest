#include<bits/stdc++.h>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    stack<char> stk;
    
    for(int i=0;i<s.size();i++){
        if(s[0]==')') return false;
        if(s[i]=='(') stk.push(s[i]);
        else if(!stk.empty() && stk.top()=='(') stk.pop();
    }
    
    if(!stk.empty()) answer = false;
    
    return answer;
}