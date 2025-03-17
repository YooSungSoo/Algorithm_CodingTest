#include<bits/stdc++.h>

using namespace std;

int n,a,r;

int main() {
 
	while(true){
		cin >> n;
		r=0;
		vector<int> a;
		
		if(n==-1) break;
		
		for(int i=1;i<n+1;i++){
			if(n%i==0) a.push_back(i);
		}
		
		for(int i=0;i<a.size()-1;i++){
			r = r + a[i];
		}
		
		if(n==r){
			cout << n << " = ";
			for(int i=0;i<a.size()-1;i++){
				if(i==a.size()-2) cout << a[i];
				else cout << a[i] << " + ";
			}
		}else cout << n << " is NOT perfect.";
		
		cout << endl;
	}

    return 0;
}