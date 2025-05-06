#include <bits/stdc++.h>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int a = 0;
    int b = 0;
    sort(dots.begin(),dots.end());
    a = abs(dots[0][1] - dots[1][1]);
    b = abs(dots[1][0] - dots[2][0]);
    answer = a*b;
    
    return answer;
}