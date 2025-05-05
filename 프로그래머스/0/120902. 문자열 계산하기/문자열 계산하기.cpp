#include <string>
#include <sstream>

using namespace std;

int solution(string my_string) {
    istringstream ss(my_string);
    int result, num;
    char op;

    ss >> result;  
    while (ss >> op >> num) {  
        if (op == '+') {
            result += num;
        } else if (op == '-') {
            result -= num;
        }
    }

    return result;
}
