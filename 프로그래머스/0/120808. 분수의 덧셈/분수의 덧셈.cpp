#include <bits/stdc++.h>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int de = 1;
    int nu = 1;
    int n = 1;
    
    de = denom1 * denom2;
    nu = (denom2*numer1) + (denom1 * numer2);
    
    int g = gcd(nu, de);
    
    answer.push_back(nu / g);
    answer.push_back(de / g);

    return answer;
}