#include <bits/stdc++.h>

using namespace std;
int xcnt[10];
int ycnt[10];
vector<int> v;

string solution(string X, string Y) {
    string answer = "";
    for(int i=0;i<X.size();i++){
        xcnt[X[i]-'0']++;
    }
    for(int i=0;i<Y.size();i++){
        ycnt[Y[i]-'0']++;
    }
    for(int i=0;i<10;i++){
        if(xcnt[i] > 0 && ycnt[i] > 0){
           for(int j=0;j < min(xcnt[i],ycnt[i]);j++){
               v.push_back(i);
           }
        }
    }
    sort(v.begin(),v.end(),greater<int>());
    if(v.size()==0) answer ="-1";
    else if(v[0]==0) answer = "0";
    else{
        for(int i=0;i<v.size();i++){
            answer += to_string(v[i]);
        }
    }
    return answer;
}