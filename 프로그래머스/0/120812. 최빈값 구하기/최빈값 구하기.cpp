#include <string>
#include <vector>

using namespace std;

int a[1004];
int mx,n;

int solution(vector<int> array) {
    int answer = 0;
    for(int i=0;i<array.size();i++){
        a[array[i]]++;
    }
    for(int i = 0; i < 1004; i++){
        if (a[i] > mx) {
            mx = a[i];
            answer = i;  
            n = 1;
        } else if (a[i] == mx) {
            n++;
        }
    }

    if(n>1) answer = -1;
    return answer;
}