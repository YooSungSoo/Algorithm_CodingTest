#include<bits/stdc++.h>

using namespace std;

int xx1,xx2,xx3,yy1,yy2,yy3,a,b;

int main() {
	
	cin >> xx1 >> yy1; 
	cin >> xx2 >> yy2;
	cin >> xx3 >> yy3;
	
	if(xx1==xx2) a=xx3;
	else if(xx2==xx3) a=xx1;
	else  a=xx2;
	
	if(yy1==yy2) b=yy3;
	else if(yy2==yy3) b=yy1;
	else b=yy2;
	
	cout << a << " " << b << endl;

    return 0;
}