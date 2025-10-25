#include <string>
#include <vector>

using namespace std;

string s1;
string s2;

int solution(int a, int b) {
    int answer = 0;
    s1 = to_string(a);
    s2 = to_string(b);
    string r1 = s1 + s2;
    string r2 = s2 + s1;
    if(stoi(r1) > stoi(r2)) answer = stoi(r1);
    else answer = stoi(r2);
    return answer;
}