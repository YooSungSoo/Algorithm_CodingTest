#include <bits/stdc++.h>

using namespace std;

int solution(string s) {
    int answer = 0;
    int temp = 0;
    stringstream ss(s);
    string num = "";
    vector<string> v;
    while(ss >> num){
        v.push_back(num);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]=="Z") {
            temp += stoi(v[i-1]);
            continue;
        }
        answer += stoi(v[i]);
    }
    answer -=temp;
    return answer;
}