#include<bits/stdc++.h>

using namespace std;

int n,a,r;

int main() {
 
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a;
		vector<int> b;
		for(int j=1;j<a+1;j++){
			if(a%j==0) b.push_back(i);
		}
		if(b.size()==2) r++;
	}

	cout << r;
    return 0;
}