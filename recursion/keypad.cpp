#include<iostream>
using namespace std;
#include<bits/stdc++.h>
char keypad[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void generate(char *input,char *output,int i,int j){
	if(input[i]=='\0'){
		output[j]='\0';
		cout<<output<<endl;
		return;
	}
	int digit=input[i]-'0';
	if(digit==0 || digit==1){
		generate(input,output,i+1,j);
	}
	for(int k=0;keypad[digit][k]!='\0';k++){
		output[j]=keypad[digit][k];
		generate(input,output,i+1,j+1);
	}
	return;
}
int main(){
	char input[1000];
	cin>>input;
	char output[1000];
	generate(input,output,0,0);
}