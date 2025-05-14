#include <bits/stdc++.h>
using namespace std;

string solution(vector<int> food) {
    deque<int> deq;
    string answer = "";

    deq.push_back(0); 

    for (int i = food.size() - 1; i >= 1; i--) {
        if (food[i] % 2 == 1) food[i] -= 1;

        for (int j = 0; j < food[i] / 2; j++) {
            deq.push_front(i); 
            deq.push_back(i);  
        }
    }

    while (!deq.empty()) {
        answer += to_string(deq.front());
        deq.pop_front();
    }

    return answer;
}
