#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int sum = 0;
    string s = to_string(x);
    
    for(int i=0;i<s.size();i++){
        sum += s[i] - '0';
    }
    
    if(x % sum==0) answer = true;
    return answer;
}