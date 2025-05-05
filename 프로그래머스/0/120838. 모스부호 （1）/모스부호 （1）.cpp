#include <bits/stdc++.h>

using namespace std;

unordered_map<string, char> morse = {
        {".-", 'a'},   {"-...", 'b'}, {"-.-.", 'c'}, {"-..", 'd'}, {".", 'e'},
        {"..-.", 'f'}, {"--.", 'g'},  {"....", 'h'}, {"..", 'i'},  {".---", 'j'},
        {"-.-", 'k'},  {".-..", 'l'}, {"--", 'm'},   {"-.", 'n'},  {"---", 'o'},
        {".--.", 'p'}, {"--.-", 'q'}, {".-.", 'r'},  {"...", 's'}, {"-", 't'},
        {"..-", 'u'},  {"...-", 'v'}, {".--", 'w'},  {"-..-", 'x'}, {"-.--", 'y'},
        {"--..", 'z'}
    };

string solution(string letter) {
    string answer = "";
    stringstream ss(letter);
    string word;
    vector<string> w;
    
    while(ss >> word){
        w.push_back(word);
    }
    for(int i=0;i<w.size();i++){
        answer += morse[w[i]];
    }
    
    return answer;
}