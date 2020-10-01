#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<cmath>
bool canplace(int sudoku[9][9],int i,int j,int n,int number){
	//col and row check
	for(int x=0;x<n;x++){
		if(sudoku[x][j]==number || sudoku[i][x]==number)return false;
	}
	int rn=sqrt(n);
	int x=(i/rn)*rn;
	int y=(j/rn)*rn;
	for(int i=x;i<x+rn;i++){
		for(int j=y;j<y+rn;j++){
			if(sudoku[i][j]==number)return false;
		}
	}
	return true;
}
bool solve(int sudoku[9][9],int i,int j,int n){
	//base case
	if(i==n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<sudoku[i][j]<<" ";
			}
			cout<<endl;
		}
		return true;
	}
	//colm exceeds
	if(j==n){
		return solve(sudoku,i+1,0,n);
	}
	if(sudoku[i][j]!=0){
		return solve(sudoku,i,j+1,n);
	}
	for(int number=1;number<=n;number++){
		if(canplace(sudoku,i,j,n,number)){
			//assuming we can place
			sudoku[i][j]=number;
			bool couldwe=solve(sudoku,i,j+1,n);
			if(couldwe){
				return true;
			}
		}
	}
	sudoku[i][j]=0;     //backtracking
	return false;

}
int main(){
	int sudoku[9][9]={
		{5,3,0,0,7,0,0,0,0},
		{ 6,0,0,1,9,5,0,0,0},
		{0,9,8,0,0,0,0,6,0},
		{8,0,0,0,6,0,0,0,3},
		{4,0,0,8,0,3,0,0,1},
		{7,0,0,0,2,0,0,0,6},
		{0,6,0,0,0,0,2,8,0},
		{0,0,0,4,1,9,0,0,5},
		{0,0,0,0,8,0,0,7,9},
	};
	solve(sudoku,0,0,9);
}