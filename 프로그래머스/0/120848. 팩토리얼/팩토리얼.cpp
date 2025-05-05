#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;

    while(1){
        int rst = 1;
        for(int i=1;i<=answer;i++){
            rst *=i;
        }
        if(rst>n) break;
        answer ++;
    }
    return answer-1;
}