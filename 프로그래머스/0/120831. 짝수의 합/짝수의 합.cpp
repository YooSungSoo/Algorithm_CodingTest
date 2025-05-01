#include <string>
#include <vector>

using namespace std;

int a=2;
int answer = 0;

int solution(int n) {

    while(1){
        if(a >n) break;
        answer += a;
        a += 2;
    }
    return answer;
}