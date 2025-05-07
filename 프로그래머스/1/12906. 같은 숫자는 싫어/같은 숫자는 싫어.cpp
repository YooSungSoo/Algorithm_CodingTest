#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    stack<int> stk;
    
    for(int i=0;i<arr.size();i++){
        if(stk.empty()) stk.push(arr[i]);
        else if(!stk.empty() && stk.top() != arr[i])
            stk.push(arr[i]);
    }
    
     while(!stk.empty()){
         answer.push_back(stk.top());
         stk.pop();
     }
    
    reverse(answer.begin(),answer.end());
    
    return answer;
}