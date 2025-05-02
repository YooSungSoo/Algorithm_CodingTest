#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    while(1){
        int temp = answer * 6;
        if(temp % n == 0) break;
        answer ++;
    }
    return answer;
}