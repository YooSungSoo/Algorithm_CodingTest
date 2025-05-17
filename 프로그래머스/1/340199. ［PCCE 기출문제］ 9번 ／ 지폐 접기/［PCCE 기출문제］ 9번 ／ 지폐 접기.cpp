#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while(1){
        if(min(wallet[0],wallet[1]) <min(bill[0],bill[1]) || max(wallet[0],wallet[1]) <max(bill[0],bill[1])){
            if(bill[0]>bill[1]) bill[0] = bill[0] / 2;
            else bill[1] = bill[1] / 2;
            answer++;
        }
    else break;
    }
    
    return answer;
}