#include <string>
#include <vector>

int a , b;

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    a=1;
    for(int i=0;i<num_list.size();i++){
        a = a * num_list[i];
        b = b + num_list[i];
    }
    b=b*b;
    if(a<b) answer = 1;
    return answer;
}