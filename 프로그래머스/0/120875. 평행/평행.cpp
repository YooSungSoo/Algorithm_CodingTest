#include <vector>

using namespace std;

// 두 점씩 선택해 만든 선들의 기울기 비교
int solution(vector<vector<int>> dots) {
    // 가능한 쌍: (0,1)-(2,3), (0,2)-(1,3), (0,3)-(1,2)
    if ((dots[1][1] - dots[0][1]) * (dots[3][0] - dots[2][0]) == 
        (dots[3][1] - dots[2][1]) * (dots[1][0] - dots[0][0])) {
        return 1;
    }

    if ((dots[2][1] - dots[0][1]) * (dots[3][0] - dots[1][0]) == 
        (dots[3][1] - dots[1][1]) * (dots[2][0] - dots[0][0])) {
        return 1;
    }

    if ((dots[3][1] - dots[0][1]) * (dots[2][0] - dots[1][0]) == 
        (dots[2][1] - dots[1][1]) * (dots[3][0] - dots[0][0])) {
        return 1;
    }

    return 0;
}
