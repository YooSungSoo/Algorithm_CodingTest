#include <bits/stdc++.h>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    sort(spell.begin(), spell.end());
    
    do {
        string word = "";
        for(int i=0;i<spell.size();i++){
            word += spell[i];
        }

        for(int i=0;i<dic.size();i++) {
            if (dic[i] == word) return 1;
        }
    } while (next_permutation(spell.begin(), spell.end()));
    
    return 2;
}