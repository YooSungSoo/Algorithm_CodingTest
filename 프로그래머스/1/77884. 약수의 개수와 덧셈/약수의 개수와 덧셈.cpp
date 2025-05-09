#include <string>
#include <vector>

using namespace std;

int a(int n){
    int k=0;
    for(int i=1;i<=n;i++){
        if(n%i==0) k++;
    }
    return k;
}

int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        if(a(i) % 2 ==0) answer += i;
        else answer -= i;
    }
    return answer;
}