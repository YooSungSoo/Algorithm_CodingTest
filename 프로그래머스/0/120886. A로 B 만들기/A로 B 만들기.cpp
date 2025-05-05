#include <string>
#include <vector>

using namespace std;

int b_cnt[26],a_cnt[26];

int solution(string before, string after) {
    int answer = 1;
    for(int i=0;i<before.size();i++){
        a_cnt[before[i] - 'a']++;
        b_cnt[after[i] - 'a']++;
}
    for(int i=0;i<26;i++){
        if(a_cnt[i]==b_cnt[i]) continue;
        else answer = 0;
    }
    return answer;
}