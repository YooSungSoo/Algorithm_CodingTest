#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int a = (k-1)*2;
    a = a % numbers.size();
    answer = numbers[a];
    return answer;
}