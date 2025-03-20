#include <bits/stdc++.h>

using namespace std;

int n,a[9],sum,p,x,y;

int main() {
	
	for(int i=0;i<9;i++){
		cin >> n;
		a[i] = n;
		sum +=n;
	}
	
	for(int i=0;i<9;i++){
		for(int j=i+1;j<9;j++){
			p = a[i] + a[j];
			if(sum - p==100){
				x=i;
				y=j;
			}
		}
	}
	vector<int> s;
	
	for(int i=0;i<9;i++){
		if(i==y) continue;
		else if(i==x) continue;
		else  s.push_back(a[i]);
	}
	sort(s.begin(),s.end());
	for(int i=0;i<7;i++){
		cout << s[i] << endl;
	}
	

    return 0;
}
