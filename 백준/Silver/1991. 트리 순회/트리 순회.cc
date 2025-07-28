#include<bits/stdc++.h>

using namespace std;

int n;
char p, l, r;
int tree[26][2];

void preOrder(int node){
	cout << char(node + 'A');
	if(tree[node][0]!=-1) preOrder(tree[node][0]);
	if(tree[node][1]!=-1) preOrder(tree[node][1]);
}
void inOrder(int node){
	if(tree[node][0]!=-1) inOrder(tree[node][0]);
	cout << char(node + 'A');
	if(tree[node][1]!=-1) inOrder(tree[node][1]);
}
void postOrder(int node){
	if(tree[node][0]!=-1) postOrder(tree[node][0]);
	if(tree[node][1]!=-1) postOrder(tree[node][1]);
	cout << char(node + 'A');
}


int main(void){
	
	cin >> n;
	
	for(int i=0;i<26;i++){
		tree[i][0] = tree[i][1] = -1;
	}
	
	for(int i=0;i<n;i++){
		cin >> p >> l >> r;
		if(l != '.') tree[p-'A'][0] = l-'A';
		if(r != '.') tree[p-'A'][1] = r-'A';
	}
	
	preOrder(0);
	cout << "\n";
	inOrder(0);
	cout << "\n";
	postOrder(0);
	cout << "\n";
	
	return 0;
}