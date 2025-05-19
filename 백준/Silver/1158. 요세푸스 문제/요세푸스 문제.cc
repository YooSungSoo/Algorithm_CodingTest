#include <bits/stdc++.h>
using namespace std;

int a, b;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a >> b;

    list<int> L;
    vector<int> result;

    for (int i = 1; i <= a; i++) {
        L.push_back(i);
    }

    auto it = L.begin();
    
    while (!L.empty()) {
        for (int i = 1; i < b; i++) {
            it++;
            if (it == L.end()) it = L.begin(); 
        }
        result.push_back(*it);
        it = L.erase(it); 
        if (it == L.end()) it = L.begin(); 
    }

    cout << "<";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) cout << ", ";
    }
    cout << ">\n";

    return 0;
}
