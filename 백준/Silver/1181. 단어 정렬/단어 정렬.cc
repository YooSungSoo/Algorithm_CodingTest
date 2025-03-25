#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n;
	set<string> a_unique;
	vector<string> a(n);
	
	for(int i=0;i<n;i++){
		string s;
		cin >> s;
		a_unique.insert(s);
	}
	
	a.assign(a_unique.begin(),a_unique.end());
	
	 sort(a.begin(), a.end(), [](const string &a, const string &b) {
        if (a.size() == b.size()) return a < b; // 길이가 같으면 사전순
        return a.size() < b.size(); // 길이순 정렬
    });
	
	for(int i=0;i<a.size();i++){
		cout << a[i] << "\n";
	}

	
	
	return 0;
}