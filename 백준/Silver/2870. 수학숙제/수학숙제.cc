#include<bits/stdc++.h>

using namespace std;
int n;
string s,temp;
vector<string> v;

void go(){
	while(1){
		if(temp.size()&&temp.front()=='0') temp.erase(temp.begin());
		else break;
	}
	if(temp.size()==0) temp = "0";
	v.push_back(temp);
	temp = "";
}
bool cmp(string a,string b){
	if(a.size() == b.size()) return a<b;
	return a.size() < b.size();
}


int main(void){
	cin >> n;
	
	while(n--){
		cin >> s;
		temp = "";
		for(int i=0;i<s.size();i++){
	
			if(s[i] < 65) temp += s[i];
			else if(temp.size()) go();
		}
		if(temp.size()) go();
	}
	
	sort(v.begin(),v.end(),cmp);
		
	for(auto it : v){
		cout << it << "\n";
	}

	return 0;
}