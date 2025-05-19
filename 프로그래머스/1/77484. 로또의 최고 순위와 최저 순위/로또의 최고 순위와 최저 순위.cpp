#include <string>
#include <vector>

using namespace std;

int getRank(int c){
    return c >= 2 ? 7 - c : 6; 
}

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt = 0;
    int zero = 0;
    
    for(int i=0;i<6;i++){
        if(lottos[i]==0) zero++;
        for(int j=0;j<6;j++){
            if(lottos[i] == win_nums[j]) cnt++;
        }
    }
    int max_r = getRank(cnt + zero);
    int min_r = getRank(cnt);

    answer.push_back(max_r);
    answer.push_back(min_r);
    
    return answer;
}