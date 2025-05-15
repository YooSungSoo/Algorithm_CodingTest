#include <string>
#include <vector>
#include <cmath>

using namespace std;

int count_divisors(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if (i == n / i) cnt++;       
            else cnt += 2;              
        }
    }
    return cnt;
}

int solution(int number, int limit, int power) {
    int answer = 0;
    for (int i = 1; i <= number; i++) {
        int cnt = count_divisors(i);
        if (cnt > limit) answer += power;
        else answer += cnt;
    }
    return answer;
}
