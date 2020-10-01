#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool rat(char maze[10][10],int solution[10][10],int i,int j,int m,int n){
	if(i==m &&j==n){
		solution[i][j]=1;
		///print
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				cout<<solution[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return true;
	}
	if(i>m || j>n)return false;
	if(maze[i][j]=='X')return false;
	///assume there is path
	solution[i][j]=1;
	bool right=rat(maze,solution,i,j+1,m,n);
	bool down=rat(maze,solution,i+1,j,m,n);
	//backtracking
	solution[i][j]=0;
	if(right||down){
		return true;
	}
	return false;

}
int main(){
	char maze[10][10]={"0000",
						"00X0",
						"000X",
						"0X00",};
	int solution[10][10]={0};
	int m=4,n=4;
	bool res=rat(maze,solution,0,0,m-1,n-1);
	if(!res){
		cout<<"path doesnt exist"<<endl;
	}
}