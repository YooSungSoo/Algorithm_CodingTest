#include <bits/stdc++.h>
using namespace std;

int tree[26][2];


void preorder(int node) {
    cout << char(node + 'A');
    if (tree[node][0] != -1) preorder(tree[node][0]); 
    if (tree[node][1] != -1) preorder(tree[node][1]);
}

void inorder(int node) {
    if (tree[node][0] != -1) inorder(tree[node][0]); 
    cout << char(node + 'A'); 
    if (tree[node][1] != -1) inorder(tree[node][1]);
}

void postorder(int node) {
    if (tree[node][0] != -1) postorder(tree[node][0]);
    if (tree[node][1] != -1) postorder(tree[node][1]);
    cout << char(node + 'A');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 0; i < 26; i++) {
        tree[i][0] = tree[i][1] = -1;
    }

    for (int i = 0; i < n; i++) {
        char parent, left, right;
        cin >> parent >> left >> right;

        int p = parent - 'A'; 
        if (left != '.') tree[p][0] = left - 'A';  
        if (right != '.') tree[p][1] = right - 'A';
    }

    preorder(0); cout << "\n";
    inorder(0); cout << "\n";
    postorder(0); cout << "\n";

    return 0;
}
