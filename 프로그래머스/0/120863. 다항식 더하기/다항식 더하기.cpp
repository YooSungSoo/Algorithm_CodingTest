#include <string>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    int x_coeff = 0; // 'x' 항의 계수 합
    int constant = 0; // 상수항의 합
    stringstream ss(polynomial);
    string term;

    while (ss >> term) {
        if (term == "+") continue;
        if (term.find('x') != string::npos) {
            // 'x' 항 처리
            if (term == "x") {
                x_coeff += 1;
            } else {
                x_coeff += stoi(term.substr(0, term.find('x')));
            }
        } else {
            // 상수항 처리
            constant += stoi(term);
        }
    }

    // 결과 문자열 구성
    if (x_coeff == 0 && constant == 0) return "0";
    if (x_coeff == 0) return to_string(constant);
    if (constant == 0) return x_coeff == 1 ? "x" : to_string(x_coeff) + "x";
    return (x_coeff == 1 ? "x" : to_string(x_coeff) + "x") + " + " + to_string(constant);
}
