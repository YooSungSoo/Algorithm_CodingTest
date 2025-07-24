#include <bits/stdc++.h>
using namespace std;

int n, k;
int a, b;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	cin >> n;
	set<int> s;
	
	for(int i=0;i<n;i++){
		cin >> k;
		s.insert(k);
	}
	cin >> a;
	for(int i=0;i<a;i++){
		cin >> b;
		if(s.count(b)==1) cout << 1 << " ";
		else cout << 0 << " ";
	}

    return 0;
}
