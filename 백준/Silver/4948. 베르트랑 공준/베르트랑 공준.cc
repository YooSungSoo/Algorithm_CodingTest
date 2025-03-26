#include <bits/stdc++.h>

using namespace std;

const int MAX = 246912;  

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

int countPrimesInRange(int n) {
    int count = 0;
    for (int i = n + 1; i <= 2 * n; i++) {
        if (isPrime[i]) count++;
    }
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    sieve();  
    
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << countPrimesInRange(n) << "\n";
    }

    return 0;
}
