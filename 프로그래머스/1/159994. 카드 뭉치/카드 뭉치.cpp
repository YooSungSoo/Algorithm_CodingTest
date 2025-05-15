#include <bits/stdc++.h>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    queue<string> c1;
    queue<string> c2;
    for(int i=0;i<cards1.size();i++){
        c1.push(cards1[i]);
    }
     for(int i=0;i<cards2.size();i++){
        c2.push(cards2[i]);
    }
    
    for(int i=0;i<goal.size();i++){
        if(goal[i]==c1.front()) c1.pop();
        else if(goal[i]==c2.front()) c2.pop();
        else answer = "No";
    }
    
    return answer;
}