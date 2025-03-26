#include<bits/stdc++.h>

using namespace std;

int a1,a2,b1,b2,r1,r2,a;


int main(void){
	
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    
    r1 = (a1 * b2) + (b1 * a2);
    r2 = b2 * a2;
    
    a = gcd(r1, r2);
    
    r1 = r1 / a;
    r2 = r2 / a;
     
     cout << r1 << " " << r2;
    
	
	return 0;
}  