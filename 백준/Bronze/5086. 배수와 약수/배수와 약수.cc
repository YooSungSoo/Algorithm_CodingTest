#include<bits/stdc++.h>

using namespace std;

int a,b;

int main() {
 
 	while(1){
 		cin >> a >> b;
 		if(a==0 && b==0) break;
 		if(a>b){
 			if(a%b==0){
 				cout << "multiple";
			 }
			 else{
			 	cout << "neither";
			 }
		 }
		 if(a<b){
		 	if(b%a==0){
		 		cout << "factor";
			 }
			 else{
			 	cout << "neither";
			 }
		 }
		 cout << endl;
 		
	 }
    return 0;
}