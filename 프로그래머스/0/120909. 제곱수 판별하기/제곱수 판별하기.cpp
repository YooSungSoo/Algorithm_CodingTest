#include <bits/stdc++.h>

using namespace std;

int solution(int n) {
    int answer = 2;
    int k=1;
    while(k <= 1000){
        if(pow(k,2) == n) answer = 1;
            k++;
    }
    
    return answer;
}