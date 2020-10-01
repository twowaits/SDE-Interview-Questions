#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void generate(char *input,char *output,int i,int j){
	if(input[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}
	////take 1 number
	int digit=input[i]-'0';
	char ch=digit+'A'-1;
	output[j]=ch;
	generate(input,output,i+1,j+1);
	if(input[i+1]!='\0'){
	int sec=input[i+1]-'0';
	int num=digit*10+sec;
	if(num<=26){
		char ch1=num+'A'-1;
		output[j]=ch1;
		generate(input,output,i+2,j+1);
	}

	}
	return;
}
int main(){
	char input[1000];
	cin>>input;
	char output[1000];
	generate(input,output,0,0);
}