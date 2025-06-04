#include <bits/stdc++.h>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string,int> m;
    
    for(int i=0;i<players.size();i++){
        m[players[i]] = i;
    }
    
    for(int i=0;i<callings.size();i++){
        int idx = m[callings[i]];
        if(idx > 0){
            string s = players[idx-1];
            swap(players[idx], players[idx - 1]);

            m[callings[i]]--;
            m[s]++;
        }
    }
    
    
    return players;
    
}