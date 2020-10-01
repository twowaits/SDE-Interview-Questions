#include<iostream>
using namespace std;
#include<cstring>
void generate(char *in,char *out,int i,int j){
	if(in[i]=='\0'){
		out[j]='\0';
		cout<<out<<" ";
		return;
	}
	////////////include
	out[j]=in[i];
	generate(in,out,i+1,j+1);
	////////////exclude
	generate(in,out,i+1,j);
}
int main(){
	char input[]="abcd";
	char output[10];
	generate(input,output,0,0);
}