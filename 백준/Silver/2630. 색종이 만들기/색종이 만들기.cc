#include<bits/stdc++.h>

using namespace std;

int n;
int a[129][129];
int white, blue;

bool color_right(int x, int y,int size){
	int color = a[x][y];
	for(int i=x;i<x + size;i++){
		for(int j=y;j<y + size;j++){
			if(a[i][j] != color) return false;
		}
	}
	return true;
}

void devide(int x, int y, int size){
	
	int n_size = size / 2;
	
	if(color_right(x,y,size)){
		if(a[x][y]==1) blue++;
		else white ++;
		return;
	}
	
	devide(x,y,n_size);
	devide(x+n_size,y,n_size);
	devide(x,y+n_size,n_size);
	devide(x+n_size,y+n_size,n_size);
	
}



int main(){
	
	cin >> n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	
	devide(0,0,n);
	
	cout << white << "\n" << blue;
	
	
	return 0;
}