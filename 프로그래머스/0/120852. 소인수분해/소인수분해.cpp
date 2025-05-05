#include <bits/stdc++.h>

using namespace std;
bool isprime(int a){
    if(a<=1) return false;
    for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
    }
    return true;
}

vector<int> solution(int n) {
    vector<int> answer;
    set<int> s;
    int k = 2;
    if(isprime(n)) {
        answer.push_back(n);
        return answer;
    }
    while(1){
        
        if(n==1) break;
        if(n%k==0){
            n = n/k;
            s.insert(k);
        }else k++;
    }
      for(auto elem : s){
        answer.push_back(elem);
    }
    return answer;
}