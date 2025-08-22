#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i=0;i<scoville.size();i++){
        pq.push(scoville[i]);
    }
    bool flag = true;
    for(int i=0;i<scoville.size();i++){
        if(scoville[i] !=0) flag = false;
    }
    if(flag==true) return -1;
        
    while(pq.top() < K){
        
        if(pq.size() < 2) return -1;
        
        int low = pq.top();
        pq.pop();
        int rst = low  + (pq.top() * 2);
        pq.pop();
        pq.push(rst);
        answer ++;
    }
    return answer;
}