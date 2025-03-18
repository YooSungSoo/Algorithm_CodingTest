#include<bits/stdc++.h>

using namespace std;

int x,y,w,h,rst1,rst2;

int main() {
	
	cin >> x >> y >> w >> h;
	
	if(x>w-x){
		rst1 += w-x;
	}else rst1 += x;
	if(y>h-y){
		rst2 += h-y;
	}else rst2 += y;
	
	if(rst1>rst2) cout << rst2;
	else cout << rst1;

    return 0;
}