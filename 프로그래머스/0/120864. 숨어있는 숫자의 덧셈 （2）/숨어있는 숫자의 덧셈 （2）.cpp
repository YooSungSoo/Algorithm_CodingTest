#include <bits/stdc++.h>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string temp ="";
    
    for(int i=0;i<my_string.size();i++){
        if(isdigit(my_string[i])){
            temp += my_string[i];
        }else {
            if(!temp.empty()){
                answer += stoi(temp);
                temp = "";
            }
        }
    }
     if (!temp.empty()) {
        answer += stoi(temp);
    }
    
    return answer;
}