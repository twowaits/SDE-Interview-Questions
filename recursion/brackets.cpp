#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void generate(char *output,int n,int index,int open,int close){
	if(index==2*n){
		output[index]='\0';
		cout<<output<<endl;
		return;
	}
	if(open<n){
		output[index]='(';
		generate(output,n,index+1,open+1,close);
	}
	if(close<open){
		output[index]=')';
		generate(output,n,index+1,open,close+1);
	}
	return ;
}
int main(){
	int n=3;
	//cin>>n;
	char output[1000];
	generate(output,n,0,0,0);
}