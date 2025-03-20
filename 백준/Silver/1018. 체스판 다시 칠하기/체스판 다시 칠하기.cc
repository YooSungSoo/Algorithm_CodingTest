#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<string> board; // 문자열 벡터로 저장

// 체스판 패턴 정의
string WB[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};

string BW[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

// 8×8 체스판을 칠하는 최소 개수 계산 함수
int getRepaintCount(int x, int y) {
    int cnt_WB = 0; // 'W'부터 시작하는 패턴과 비교
    int cnt_BW = 0; // 'B'부터 시작하는 패턴과 비교

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (board[x + i][y + j] != WB[i][j]) cnt_WB++;
            if (board[x + i][y + j] != BW[i][j]) cnt_BW++;
        }
    }
    return min(cnt_WB, cnt_BW);
}

int main() {
    cin >> n >> m;
    board.resize(n);

    // 보드 입력
    for (int i = 0; i < n; i++) {
        cin >> board[i]; // 한 줄씩 입력받음
    }

    int minPaint = INT_MAX;

    // 가능한 모든 8×8 체스판을 검사
    for (int i = 0; i <= n - 8; i++) {
        for (int j = 0; j <= m - 8; j++) {
            minPaint = min(minPaint, getRepaintCount(i, j));
        }
    }

    cout << minPaint << endl;
    return 0;
}
