#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skipSet(skip.begin(), skip.end());
    
    for (char c : s) {
        int cnt = 0;
        char ch = c;
        while (cnt < index) {
            ch++;
            if (ch > 'z') ch = 'a';
            if (skipSet.find(ch) == skipSet.end()) {
                cnt++;
            }
        }
        answer += ch;
    }
    
    return answer;
}
