#include <bits/stdc++.h>

using namespace std;

int g(int a, int b){
    return (a * b) / gcd(a,b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(g(n,m));
    
    return answer;
}