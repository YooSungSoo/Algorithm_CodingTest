#include <bits/stdc++.h>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    string temp ="";
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i]) || s[i]=='-'){
           temp += s[i];
        }else{
            if(!temp.empty()){
                v.push_back(stoi(temp));
                temp = "";
            }
        }
    }
    v.push_back(stoi(temp));
    
    sort(v.begin(),v.end());   
    int a = v[0];
    int b = v[v.size()-1];


    return to_string(a) + " " + to_string(b);
}