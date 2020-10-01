#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int convert(char *s,int n){
	if(n==0)return 0;
	int digit=s[n-1]-'0';
	return convert(s,n-1)*10+digit;
}
int main(){
	char s[]="1234";
	int n=strlen(s);
	cout<<convert(s,n);
}