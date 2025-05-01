#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int a = num_list.size();
    for(int i=0;i<a;i++){
        answer.push_back(num_list[a-i-1]);
    }
    
    return answer;
}