#include<bits/stdc++.h>

using namespace std;

int t;
int q,d,n,p,a;

int main(){
	
	cin >> t;
	for(int i=0;i<t;i++){
		cin >> a;
		while(a){
		if(a>=25){
			q = a / 25;
			a = a - q * 25;
		}if(a<25 && a>=10){	
			d = a / 10;
			a = a - d * 10;
		}if(a<10 && a>=5){	
			n = a / 5;
			a = a - n * 5;
		}if(a<5 && a>=1){	
			p = a;
			a = a - p;
		}
		}
		
		cout << q << " " << d << " " << n << " " << p << endl;
		q=0,d=0,n=0,p=0;
	}
	return 0;
}