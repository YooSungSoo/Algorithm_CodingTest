#include <bits/stdc++.h>
using namespace std;

long long solution(int price, int money, int count)
{
    long long total = 0;
    for (int i = 1; i <= count; i++) {
        total += (long long)price * i;
    }

    long long answer = total - money;
    if (answer <= 0) return 0;
    return answer;
}
