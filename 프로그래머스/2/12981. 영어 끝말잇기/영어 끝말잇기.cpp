#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    int num = 0;
    vector<string> s;
    s.push_back(words[0]);
    for(int i=1;i<words.size();i++){
       for(int j=0;j<s.size();j++){
           if(s[j]==words[i]){ num = i+1;
           break;
        }
       }
        if(num!=0) break;
        s.push_back(words[i]);
        
        if(words[i-1][words[i-1].size() - 1] != words[i][0]){
            num = i+1;
            break;
        }
    }
    if(num != 0){
        if(num%n==0) answer.push_back(n);
        else answer.push_back(num%n);
        int num2 = 0;
        if(num % n==0) num2 = num/n;
        else {num2 = num/n;
        num2++;
             }
        answer.push_back(num2);
        
    }else{
        answer.push_back(0);
        answer.push_back(0);
    }
    return answer;
}