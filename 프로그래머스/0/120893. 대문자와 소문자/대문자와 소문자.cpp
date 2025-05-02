#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i=0;i<my_string.size();i++){
        if(my_string[i] >= 'a' && my_string[i] <= 'z')
            answer += my_string[i] - 32;
        if(my_string[i] >= 'A' && my_string[i] <= 'Z')
            answer += my_string[i] + 32;
    }
    return answer;
}