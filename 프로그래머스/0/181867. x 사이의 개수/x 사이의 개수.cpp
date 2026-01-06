#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    int k = 0;
    for(int i=0;i<myString.size();i++){
        if(myString[i]=='x'){
            answer.push_back(k);
            k = 0;
        }else k++;
        if(i == myString.size() - 1) answer.push_back(k);
    }
    return answer;
}