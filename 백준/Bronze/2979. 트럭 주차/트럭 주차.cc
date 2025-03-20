#include <bits/stdc++.h>

using namespace std;

int a,b,c,x,y,sum;
int cnt[101];

int main() {
	
	cin >> a >> b >> c;
	
	for(int i=0;i<3;i++){
		cin >> x >> y;
		for(int j=x;j<y;j++){
			cnt[j]++;
		}
	}
	
	for(int i=0;i<101;i++){
		if(cnt[i]==1) sum += a;
			else if(cnt[i]==2) sum+= b*2;
			else if(cnt[i]==3) sum+= c*3;
	}
	
	cout << sum;
    return 0;
}
