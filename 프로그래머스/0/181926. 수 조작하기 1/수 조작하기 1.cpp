#include <string>
#include <vector>
int a, b, c, d;

using namespace std;

int solution(int n, string control) {
    int answer = 0;
    
    for(int i=0;i<control.size();i++){
        if(control[i]=='w') a++;
        else if(control[i]=='s') b++;
        else if(control[i]=='d') c++;
        else if(control[i]=='a') d++;
    }
    answer = n + a - b + 10*c - 10*d;
    return answer;
}