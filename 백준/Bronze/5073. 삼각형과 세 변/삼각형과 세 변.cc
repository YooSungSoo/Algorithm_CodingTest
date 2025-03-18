#include<bits/stdc++.h>

using namespace std;

int a,b,c;

int main() {

	while(1){
	
	cin >> a >> b >> c;
	if(a==0 && b==0 && c==0) break;
	
	int max_side = max({a, b, c});
        if (a + b + c - max_side <= max_side) {
            cout << "Invalid" << endl;
            continue;
        }

     
        if (a == b && b == c) cout << "Equilateral";
        else if (a == b || b == c || a == c) cout << "Isosceles";
        else cout << "Scalene";
        
	cout << endl;
	}
	
	
    return 0;
}