#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    priority_queue<int,vector<int>, greater<>> pq;
    for(int i=0;i<num_list.size();i++){
        pq.push(num_list[i]);
    }
    for(int i=0;i<5;i++){
        answer.push_back(pq.top());
        pq.pop();
    }
    return answer;
}