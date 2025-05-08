#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int s = x;
    while(n--){
        answer.push_back(s);
            s += x ;
    }
    return answer;
}