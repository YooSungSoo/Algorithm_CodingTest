#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
 
    int a = (num_list.size()/n);
    int cnt=0;
       vector<vector<int>> answer(a);

 
    for(int i=0;i<a;i++){
    int c = n;
       while(c--){
           answer[i].push_back(num_list[cnt]);
           cnt++;
       }
    }
    
    return answer;
}