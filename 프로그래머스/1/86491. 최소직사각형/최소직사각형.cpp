#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> sizes) {
    int maxW = 0, maxH = 0;
    for (auto &s : sizes) {
        int a = s[0], b = s[1];
        int w = max(a, b);
        int h = min(a, b);
        maxW = max(maxW, w);
        maxH = max(maxH, h);
    }
    return maxW * maxH;
}
