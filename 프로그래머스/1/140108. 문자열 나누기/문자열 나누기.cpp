#include <bits/stdc++.h>
using namespace std;

int solution(string s) {
    if (s.empty()) return 0; 

    int answer = 0;
    char first = s[0];
    int cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < s.size(); i++) {
        if (cnt1 == 0) {
            first = s[i];
            cnt1 = 1;
            cnt2 = 0;
        } else {
            if (s[i] == first) cnt1++;
            else cnt2++;

            if (cnt1 == cnt2) {
                answer++;
                cnt1 = cnt2 = 0;
            }
        }
    }

    if (cnt1 != 0 || cnt2 != 0) answer++;

    return answer;
}

int main() {
    string s;
    cin >> s;
    cout << solution(s) << '\n';
    return 0;
}
