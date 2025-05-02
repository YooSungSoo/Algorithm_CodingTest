#include <string>
#include <vector>

using namespace std;

char temp1,temp2;

string solution(string my_string, int num1, int num2) {
    string answer = "";
    temp1 = my_string[num1];
    temp2 = my_string[num2];
    my_string[num1] = temp2;
    my_string[num2] = temp1;
    
    return my_string;
}