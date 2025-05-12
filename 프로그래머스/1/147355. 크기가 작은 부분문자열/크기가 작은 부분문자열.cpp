#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    int n = p.size();
    
    for (int i = 0; i <= t.size() - n; i++) {
        string sub = t.substr(i, n);
        if (sub <= p) answer++;
    }

    return answer;
}