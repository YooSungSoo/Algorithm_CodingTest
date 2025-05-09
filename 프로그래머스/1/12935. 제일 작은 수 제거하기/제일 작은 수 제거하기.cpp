#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int a = 999999;
    for(int i=0;i<arr.size();i++){
        a = min(arr[i],a);
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==a) continue;
        else answer.push_back(arr[i]);
    }
    if(arr.size()==1 || arr.size()==0){
        answer.clear();
        answer.push_back(-1);
    }
        
    return answer;
}