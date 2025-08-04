#include <bits/stdc++.h>
using namespace std;

string s;
string temp;
vector<int> rst;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	bool minus = false;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i]))
			temp += s[i];
		else{
			int num = stoi(temp);
			if(minus) num *= -1;
			rst.push_back(num);
			if(s[i] =='-') minus = true;
			temp = "";
		}
	}
	
	if(!temp.empty()){
		int num = stoi(temp);
		if(minus == true) num *= -1;
		rst.push_back(num);
	}
	int d = 0;
	for(auto k : rst){
		d += k;
	}
	
	cout << d;
	
    return 0;
}
