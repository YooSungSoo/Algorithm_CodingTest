#include <bits/stdc++.h>

using namespace std;
const int INF = 987654321;
int n, mp, mf, ms, mv; 
int b,c,d,e,rst = INF,sum; 
struct A{
	int mp, mf, ms, mv, cost; 
}a[16]; 

int main(void){
	
	cin >> n;
	cin >> mp >> mf >> ms >> mv;
	map<int, vector<vector<int>>> rst_v;
	for(int i=0;i<n;i++){
		cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
	}
	
	for(int i = 1; i < (1 << n); i++){
		b = c = d = e = sum = 0;
        vector<int> v; 
		for(int j = 0; j < n; j++){
			if(i & (1 << j)){
                v.push_back(j + 1);
				b += a[j].mp;
				c += a[j].mf;
				d += a[j].ms;
				e += a[j].mv;
				sum += a[j].cost;
			}
		}
		
	if(b >= mp && c >= mf && d >= ms && e >= mv){
			if(rst >= sum){
				rst = sum;
                rst_v[rst].push_back(v); 
			}
		} 
	}  
		
	if(rst == INF) cout << -1 << '\n';
	else{
        sort(rst_v[rst].begin(), rst_v[rst].end());  
		cout << rst << "\n";
		for(int a : rst_v[rst][0]){
			cout << a << " ";
		} 
	}  
	return 0;
}