#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {

    int a = n / 10;
        int answer = 12000 * n + 2000 * (k-a);
    return answer;
}