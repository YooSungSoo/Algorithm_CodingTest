#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<pair<int,int>> q;
    priority_queue<int> pq;
    
    for(int i=0;i<priorities.size();i++){
        q.push({i,priorities[i]});
        pq.push(priorities[i]);
    }
    
    while(!q.empty()){
        int idx = q.front().first;
        int pri = q.front().second;
        q.pop();
        if(pri < pq.top()){
            q.push({idx,pri});
        }else{
            pq.pop();
            answer ++;
            if(idx == location) return answer;
        }
    }
    return answer;
}