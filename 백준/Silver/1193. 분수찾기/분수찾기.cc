#include<bits/stdc++.h>

using namespace std;

int main() {
    int X;
    cin >> X;

    int n = 1;
    while ((n * (n + 1)) / 2 < X) { 
        n++;
    }

    int prev_sum = (n * (n - 1)) / 2; 
    int index = X - prev_sum; 

    int numerator, denominator;
    if (n % 2 == 1) { 
        numerator = n - index + 1;
        denominator = index;
    } else {
        numerator = index;
        denominator = n - index + 1;
    }

    cout << numerator << "/" << denominator << endl;
    return 0;
}