#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> arr) {
    int answer = 1;
    for(int i=0;i<arr.size();i++){
        answer = (answer * arr[i]) / gcd(answer,arr[i]);
    }
    return answer;
}