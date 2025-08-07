#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    cin >> s;
    string rst ="";
    for(int i=0;i<s.size();i++){
        if(isupper(char(s[i])))  rst += s[i];
    }
    cout << rst;
    return 0;
}