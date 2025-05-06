#include <string>
#include <vector>

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1){
                for(int k=0;k<8;k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];
                    if(ni >= 0 && nj >= 0 && ni < n && nj < n && board[ni][nj] == 0) {
                        board[ni][nj] = 2;
                }
            }
        }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==0) answer ++;
        }
    }
    return answer;
}