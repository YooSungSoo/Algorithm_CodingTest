#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    vector<string> strNums;
    for (int num : numbers) {
        strNums.push_back(to_string(num));
    }

    sort(strNums.begin(), strNums.end(), compare);

    if (strNums[0] == "0") return "0";

    string answer = "";
    for (string s : strNums) {
        answer += s;
    }

    return answer;
}
