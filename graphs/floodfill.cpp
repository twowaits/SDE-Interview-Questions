#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int dx[]={-1,0,1,0};
int dy[]={0,1,0,-1};
int R,C;
void floodfill(char mat[][50],int i,int j,char ch,char x){
	if(i<0 || j<0 || i>=R ||j>=C){
		return;
	}
	if(mat[i][j]!=ch)return ;
	mat[i][j]=x;
	for(int k=0;k<4;k++){
		floodfill(mat,i+dx[k],j+dy[k],ch,x);
	}
}
void printmatrix(char mat [][50]){
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	cin>>R>>C;
	char mat[15][50];
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>mat[i][j];
		}
	}
	printmatrix(mat);
	floodfill(mat,4,4,'.','r');
	printmatrix(mat);
	return 0;
}