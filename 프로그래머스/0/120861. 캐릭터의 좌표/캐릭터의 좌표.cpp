#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};

    int x_limit = board[0] / 2;
    int y_limit = board[1] / 2;

    for (string key : keyinput) {
        if (key == "left" && answer[0] > -x_limit) answer[0]--;
        else if (key == "right" && answer[0] < x_limit) answer[0]++;
        else if (key == "up" && answer[1] < y_limit) answer[1]++;
        else if (key == "down" && answer[1] > -y_limit) answer[1]--;
    }

    return answer;
}
