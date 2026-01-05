#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int a = 0;
    for(int i=0;i<n_str.size();i++){
        if(n_str[i]!='0'){
            a = i;
            break;
        } 
    }
    for(int i=a;i<n_str.size();i++){
        answer += n_str[i];
    }
    return answer;
}