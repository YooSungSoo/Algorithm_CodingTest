#include <bits/stdc++.h>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long sq = sqrt(n);
    
    if (sq * sq == n) {
        answer = (sq + 1) * (sq + 1);
    }
    
    return answer;
}