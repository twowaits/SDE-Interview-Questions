#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool issafe(int chess[][10],int i,int j,int n){
	//current colmn check
	for(int row=0;row<i;row++){
		if(chess[row][j]==1)return false;
	}
	//left diagonal
	int x=i;
	int y=j;
	while(x>=0 && y>=0){
		if(chess[x][y]==1)return false;
		x--;
		y--;
	}
	x=i,y=j;
	while(x>=0 && y<n){
		if(chess[x][y]==1)return false;
		x--;
		y++;
	}
	return true;
}
bool nqueen(int chess[][10],int i,int n){
	//base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(chess[i][j]==1){
					cout<<"RANI ";
				}
				else cout<<"RAJA ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	//recursive case
	for(int j=0;j<n;j++){
		bool res=issafe(chess,i,j,n);
		if(res){
			chess[i][j]=1;
			bool queenrakhpaaye=nqueen(chess,i+1,n);
			if(queenrakhpaaye)return true;
		}
		//backtracking
		//incase previous config is not safe
		chess[i][j]=0;
	}
	//whole config is wrong
	return false;
}
int main(){
	int n=4;
	//cin>>n;
	int chess[10][10]={0};
	nqueen(chess,0,n);
	cout<<endl;
}