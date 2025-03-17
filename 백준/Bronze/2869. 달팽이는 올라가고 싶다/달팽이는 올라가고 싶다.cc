#include<bits/stdc++.h>

using namespace std;

long long a,b,v;
int n;

int main(){
	
	cin >> a >> b >> v;
	
	long long days = (v-a) / (a-b);
	if((v-a)%(a-b)!=0){
		days ++;
	}
	
	cout << days + 1;
	return 0;
}