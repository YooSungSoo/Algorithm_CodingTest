#include <bits/stdc++.h>

using namespace std;

string bi(int a, int n){
    string s = "";
    while(a>0){
        s += (a % 2) + '0';
        a = a / 2;
    }
    reverse(s.begin(),s.end());
    if (s.length() < n) {
        s = string(n - s.length(), '0') + s;
    }
    return s;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr1[i] | arr2[i]);
    }
    for(int i=0;i<n;i++){
        answer.push_back(bi(v[i],n));
    }
    for(int i=0;i<answer.size();i++){
        for(int j=0;j<n;j++){
            if(answer[i][j]=='1') answer[i][j]='#';
            else answer[i][j] = ' ';
        }
    }
    
    
    return answer;
}