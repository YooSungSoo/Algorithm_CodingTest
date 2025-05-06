#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> valid_sounds = {"aya", "ye", "woo", "ma"};

    for (string word : babbling) {
        // 각 단어에 대해 발음 가능한 단어를 순차적으로 제거
        for (string sound : valid_sounds) {
            size_t pos;
            while ((pos = word.find(sound)) != string::npos) {
                word.replace(pos, sound.length(), " ");  // 해당 발음 단어를 공백으로 바꿔줌
            }
        }
        // 남은 문자열이 공백이면 아기가 발음할 수 있는 단어
        if (word.find_first_not_of(" ") == string::npos) {
            answer++;  // 아기가 발음할 수 있는 단어이므로 카운트 증가
        }
    }
    return answer;
}

int main() {
    vector<string> babbling = {"aya", "yee", "u", "maa", "wyeoo"};
    cout << solution(babbling) << endl;  // 출력: 1
    return 0;
}
