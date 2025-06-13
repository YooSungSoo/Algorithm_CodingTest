#include <bits/stdc++.h>

using namespace std;
int a,cnt1,cnt2;
vector<int> solution(string s) {
    vector<int> answer;
    
    while(s !="1"){
        a=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1') a++;
        }
        cnt1 += s.size() - a;
        
        s = "";
        int temp = a;
        while(temp>0){
         s = char(temp % 2 + '0') + s;
        temp /= 2;
    }
    cnt2++;
}
    answer.push_back(cnt2);
    answer.push_back(cnt1);
    return answer;
}