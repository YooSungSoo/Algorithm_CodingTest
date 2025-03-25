#include<bits/stdc++.h> 

using namespace std; 

int n;

int main() {
	
	ios::sync_with_stdio(false); 
    cin.tie(NULL);

	cin >> n ;
	set<string> set;
	for(int i=0;i<n;i++){
		string s1,s2;
		cin >> s1 >> s2;
		if(s2=="enter") set.insert(s1);
		else if(s2 == "leave") set.erase(s1);
	}
	
	vector<string> result(set.begin(), set.end());
	sort(result.begin(),result.end());
	reverse(result.begin(),result.end());

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << "\n";
    }

		
	return 0;
	
}