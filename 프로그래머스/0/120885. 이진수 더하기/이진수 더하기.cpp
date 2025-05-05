#include <bits/stdc++.h>

using namespace std;

int ToDec(string s){
    reverse(s.begin(),s.end());
    int rst = 0;
    for(int i=0;i<s.size();i++){
        rst += (s[i] - '0') * pow(2,i);
    }
    return rst;
}

string solution(string bin1, string bin2) {
    string answer = "";
    int a;
    a = ToDec(bin1) + ToDec(bin2);
     if (a == 0) return "0";
    while(1){
        if(a==1) {
            answer += "1";
            break;
        }
        if(a%2==1) answer += "1";
        else answer += "0";
        a = a/2;
    }
    reverse(answer.begin(),answer.end());
    return answer;
}