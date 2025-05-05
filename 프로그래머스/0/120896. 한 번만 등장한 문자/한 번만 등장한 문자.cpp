#include <bits/stdc++.h>

using namespace std;

int cnt[26];

string solution(string s) {
    string answer = "";
    for(int i=0;i<s.size();i++){
        cnt[s[i] - 'a']++;
    }
    for(int i=0;i<26;i++){
        if(cnt[i]==1) answer += i + 'a';
    }
    sort(answer.begin(),answer.end());
    return answer;
}