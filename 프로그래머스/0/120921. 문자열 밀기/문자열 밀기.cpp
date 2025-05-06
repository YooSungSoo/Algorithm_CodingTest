#include <bits/stdc++.h>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    int n = 0;
    while(1){
        if(A == B) break;
        if(n>A.size()){
            answer = -1;
            break;
        }
        rotate(A.rbegin(),A.rbegin()+1,A.rend());
        answer ++;
        n++;
    }
    return answer;
}