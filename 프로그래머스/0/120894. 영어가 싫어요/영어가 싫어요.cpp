#include <string>
#include <unordered_map>

using namespace std;

long long solution(string numbers) {
    string answer = "";
    unordered_map<string, string> numMap = {
        {"zero", "0"}, {"one", "1"}, {"two", "2"}, {"three", "3"},
        {"four", "4"}, {"five", "5"}, {"six", "6"}, {"seven", "7"},
        {"eight", "8"}, {"nine", "9"}
    };

    string temp = "";
    for (char c : numbers) {
        temp += c;
        if (numMap.count(temp)) {
            answer += numMap[temp];
            temp = "";
        }
    }

    return stoll(answer);
}
