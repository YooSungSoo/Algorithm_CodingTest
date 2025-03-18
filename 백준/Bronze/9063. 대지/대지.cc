#include<bits/stdc++.h>

using namespace std;

int n,a,b,nx,mx,ny,my;

int main() {

	cin >> n; 
	nx=10001;
	ny=10001;
	mx=-10001;
	my =-10001;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		if(a>mx) mx = a;
		if(a<nx) nx = a;
		if(b>my) my = b;
		if(b<ny) ny = b;
	}
	
	cout << (mx-nx)*(my-ny);

    return 0;
}