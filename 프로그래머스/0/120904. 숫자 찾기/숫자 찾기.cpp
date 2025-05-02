#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    string s = to_string(num);
    for(int i=0;i<s.size();i++){
        if(s[i] == k + '0' ) {
            answer = i+1;
            return answer;
        }
    }
    return answer;
}