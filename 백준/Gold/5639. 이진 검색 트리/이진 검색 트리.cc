#include <bits/stdc++.h>
using namespace std;

vector<int> preorder;

void postorder(int start, int end) {
    if (start > end) return;

    int root = preorder[start];
    int idx = start + 1;

    while (idx <= end && preorder[idx] < root) {
        idx++;
    }

    postorder(start + 1, idx - 1);
    postorder(idx, end);
    cout << root << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x;
    while (cin >> x) {
        preorder.push_back(x); 
    }

    postorder(0, preorder.size() - 1);

    return 0;
}
