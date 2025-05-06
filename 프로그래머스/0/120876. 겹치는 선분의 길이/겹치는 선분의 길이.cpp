#include <string>
#include <vector>

using namespace std;

int a[204];

int solution(vector<vector<int>> lines) {
    int answer = 0;
    for(int i=0;i<lines.size();i++){
        for(int j=lines[i][0];j<lines[i][1];j++){
            a[j+100]++;
        }
    }
    for(int i=0;i<204;i++){
        if(a[i] >=2) answer ++;
    }
    return answer;
}