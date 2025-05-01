#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 2,a=0;
    vector<string> v;
    while( a<(100-str2.size()+1)){
        string s = "";
        for(int i=0;i<str2.size();i++){
            
            s += str1[a+i];
        }
        v.push_back(s);
        a++;
    }
    for(int i=0;i<v.size();i++){
        if(str2 == v[i]) answer = 1;
    }

    return answer;
}