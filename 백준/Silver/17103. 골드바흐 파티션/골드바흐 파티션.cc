#include <bits/stdc++.h>

using namespace std;

int MAX = 1000000;

vector<bool> isPrime(MAX + 1, true); 

void sieve() {
    isPrime[0] = isPrime[1] = false;  
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;  
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();  

    int n, m;
    cin >> n;
    
    while (n--) {
        cin >> m;
        int cnt = 0;
        
        for (int i = 2; i <= m / 2; i++) {
            if (isPrime[i] && isPrime[m - i]) {
                cnt++;
            }
        }
        
        cout << cnt << "\n";
    }

    return 0;
}
