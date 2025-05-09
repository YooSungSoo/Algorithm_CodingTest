#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
 
    int s = 10;
    while(s--){
         bool f = true;
         for(int i=0;i<numbers.size();i++){
            if(numbers[i]==s) f = false;
        }
        if(f== true) answer += s;
    }
    
    return answer;
}