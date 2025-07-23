#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    ll L;
    cin >>N ;

    vector<pair<ll,ll>> arr(N);

    for(int i=0; i<N; i++){
        ll x, y;
        cin >> x >> y;
        if(x > y) swap(x, y);
        arr[i] = {y, x};
    }
    
    cin >> L;

    sort(arr.begin(), arr.end());

    priority_queue<ll, vector<ll>, greater<ll>> pq;

    int ans = 0;

    for(auto p : arr){
    	ll b = p.first;
    	ll a = p.second;
    	
        pq.push(a);
        
        while(!pq.empty() && b - pq.top() > L){
            pq.pop();
        }

        ans = max(ans, (int)pq.size());
    }
    
    cout << ans << "\n";
    return 0;
}
