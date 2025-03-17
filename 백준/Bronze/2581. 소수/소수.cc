#include<bits/stdc++.h>

using namespace std;

int m,n,r,k;

int main() {
 
	cin >> m >> n;
	vector<int> b;
	for(int i=m;i<n+1;i++){
		vector<int> a;
		for(int j=1;j<i+1;j++){
			if(i%j==0) a.push_back(j);
		}
		if(a.size()==2) b.push_back(i);
	}
	if(b.size()==0){
		cout << "-1";
		return 0;
	}
	
	k = b[0];
	for(int i=0;i<b.size();i++){
		r += b[i];
		if(k>b[i]) k = b[i];
	}
	
	
	cout << r << "\n" << k;

    return 0;
}