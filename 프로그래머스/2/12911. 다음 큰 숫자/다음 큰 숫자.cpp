#include <string>
#include <vector>

using namespace std;
int cnt1,cnt2;

int solution(int n) {
    int answer = 0;
    int a = n;
    vector<int> v;
    while(a>0){
        v.push_back(a%2);
        a = a/2;
    }
    for(int i=0;i<v.size();i++){
        if(v[i]==1) cnt1++;
    }
    bool flag = false;
    while(1){
        v.clear();
        cnt2 = 0;
        n++;
        int a = n;
        while(a>0){
            v.push_back(a%2);
            a = a/2;
        }
        for(int i=0;i<v.size();i++){
            if(v[i]==1) cnt2++;
        }
        if(cnt1==cnt2)break;
    }
    return n;
}