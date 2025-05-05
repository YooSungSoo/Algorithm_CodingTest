#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    char c = k + '0';
    for(int a=i;a<=j;a++){
        string s = to_string(a);
        for(int b=0;b<s.size();b++){
            if(s[b]==c) answer++;
        }
    }
    return answer;
}