#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    int n = park.size();
    int m = park[0].size();

    int r = 0, c = 0; // 시작 위치 찾기
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (park[i][j] == 'S') {
                r = i;
                c = j;
            }
        }
    }

    // 방향 정의
    int dr[128] = {0}, dc[128] = {0};
    dr['N'] = -1; dc['N'] = 0;
    dr['S'] = 1;  dc['S'] = 0;
    dr['W'] = 0;  dc['W'] = -1;
    dr['E'] = 0;  dc['E'] = 1;

    // 명령 처리
    for (string cmd : routes) {
        char dir = cmd[0];
        int dist = cmd[2] - '0';

        int nr = r, nc = c;
        bool ok = true;

        // 한 칸씩 검사
        for (int k = 0; k < dist; k++) {
            nr += dr[dir];
            nc += dc[dir];

            if (nr < 0 || nr >= n || nc < 0 || nc >= m || park[nr][nc] == 'X') {
                ok = false; 
                break; // 이동 불가 → 명령 무시
            }
        }

        if (ok) { r = nr; c = nc; } // 모든 칸이 가능할 때만 이동
    }

    return {r, c};
}
