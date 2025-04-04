#include<bits/stdc++.h>

using namespace std;

int n,m,j,temp,cnt,l,r;

int main(void){
	
	cin >> n >> m >> j;
	l = 1;
	
	for(int i=0;i<j;i++){
		cin >>temp;
		r = l + m - 1;
		
		if(temp <= r && temp >= l) continue;
		else {
			if(temp < l){
				cnt += (l-temp);
				l = temp;
			}
			else{
				l+=(temp-r);
				cnt+=(temp -r);
			}
			
		}
		
			
	}
	
	cout << cnt;
	return 0;
}