#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer;
    int mx =0;
    for(int i=0;i<array.size();i++){
        mx = max(mx,array[i]);
    }
    for(int i=0;i<array.size();i++){
        if(array[i]==mx){
            answer.push_back(mx);
            answer.push_back(i);
        }
    }
    return answer;
}