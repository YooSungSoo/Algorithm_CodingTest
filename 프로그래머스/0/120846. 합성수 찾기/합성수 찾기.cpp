#include <bits/stdc++.h>

using namespace std;

bool isprime(int a){
    if(a<1) return false;
    if(a==1) return true;
     for(int i=2;i*i<=a;i++){
        if(a%i==0) return false;
      }
    return true;
}

int solution(int n) {
    int answer = n;
    for(int i=1;i<= n;i++){
        if(isprime(i) == true) {
            answer--;
    }
    }
    return answer;
}