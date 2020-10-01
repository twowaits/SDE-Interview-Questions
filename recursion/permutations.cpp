#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void permut(char *input,int i){
	//base condition
	if(input[i]=='\0'){
		cout<<input<<" ";
		return;
	}
	//rec condition
	for(int j=i;input[j]!='\0';j++){
		swap(input[i],input[j]);
		//recursion
		permut(input,i+1);
		//backtracking
		swap(input[i],input[j]);
	}
}
int main(){
	char input[1000]={0};
	cin>>input;
	permut(input,0);
}