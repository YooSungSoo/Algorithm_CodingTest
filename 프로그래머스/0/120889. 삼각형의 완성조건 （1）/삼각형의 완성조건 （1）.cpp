#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(),sides.end());
    if(sides[2] < sides[1] + sides[0]) answer = 1;
    else answer = 2;
    return answer;
}