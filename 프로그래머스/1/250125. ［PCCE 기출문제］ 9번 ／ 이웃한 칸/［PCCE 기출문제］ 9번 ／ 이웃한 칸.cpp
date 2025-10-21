#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int k = board.size();
    if(h+1 < k && board[h+1][w] == board[h][w]) answer++;
    if(0 <= h-1 && board[h-1][w] == board[h][w]) answer++;
    if(w+1 < k && board[h][w+1] == board[h][w]) answer++;
    if(0 <= w-1 && board[h][w-1] == board[h][w]) answer++;
        
    return answer;
}