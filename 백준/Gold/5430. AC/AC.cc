#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string p, arrStr;
        int n;
        cin >> p >> n >> arrStr;

        deque<int> dq;
        string num = "";
        for (int i = 1; i < arrStr.size(); i++) {
            if (isdigit(arrStr[i])) {
                num += arrStr[i];
            } else {
                if (!num.empty()) {
                    dq.push_back(stoi(num));
                    num = "";
                }
            }
        }

        bool isReversed = false;
        bool error = false;

        for (char cmd : p) {
            if (cmd == 'R') {
                isReversed = !isReversed;
            } else if (cmd == 'D') {
                if (dq.empty()) {
                    error = true;
                    break;
                } else {
                    if (isReversed) dq.pop_back();
                    else dq.pop_front();
                }
            }
        }

        if (error) {
            cout << "error\n";
        } else {
            cout << "[";
            while (!dq.empty()) {
                if (isReversed) {
                    cout << dq.back();
                    dq.pop_back();
                } else {
                    cout << dq.front();
                    dq.pop_front();
                }
                if (!dq.empty()) cout << ",";
            }
            cout << "]\n";
        }
    }

    return 0;
}
