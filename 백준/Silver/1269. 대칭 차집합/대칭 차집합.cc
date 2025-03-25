#include<bits/stdc++.h>

using namespace std;

string s;
int a,b,n,r,cnt;

int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    set<int> a1;
    set<int> b1;
    
	cin >> a >> b;
	
	for(int i=0;i<a;i++){
		cin >> n;
		a1.insert(n);
	}
	for(int i=0;i<b;i++){
		cin >> n;
		b1.insert(n);
	}
	
	for (auto x : a1) {
        if (b1.count(x)) {
            cnt++;
        }
    }

    r = (a1.size() - cnt) + (b1.size() - cnt);

    cout << r;
	
    
	return 0;
}  