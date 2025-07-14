#include<bits/stdc++.h>
using namespace std;
int a,b,n,s,g;
int main() {
    
    cin >> a >> b;
    cin >> n;

	vector<int> ss;
	vector<int> gg;
	ss.push_back(0);
	gg.push_back(0);
	ss.push_back(a);
	gg.push_back(b);


	for(int i=0;i<n;i++){
		cin >> s >> g;
		if(s==0)gg.push_back(g);
		else ss.push_back(g);
	}
	
	sort(ss.begin(),ss.end());
	sort(gg.begin(),gg.end());
	int ms = 0;
	int mg = 0;
	
	for(int i=0;i<ss.size()-1;i++){
		if(ss[i+1] - ss[i]>ms) ms = ss[i+1] - ss[i]; 
	}
	for(int i=0;i<gg.size()-1;i++){
		if(gg[i+1] - gg[i]>mg) mg = gg[i+1] - gg[i]; 
	}
    cout << ms * mg;
    return 0;
}