#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 0;
    string s = "";
    
    while(n > 0){
        s += to_string(n % 3);
        n = n / 3;
    }
    
    
    for(int i=0;i<s.size();i++){
      answer += (s[i] - '0') * pow(3, s.size() - i - 1);
    }
    
    return answer;
}