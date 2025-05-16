#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> month = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 
    vector<string> day = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};

    int total = 0;
    for (int i = 1; i < a; i++) {
        total += month[i];
    }

    total += b;  

    return day[(total + 4) % 7];
}
