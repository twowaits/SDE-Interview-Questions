#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool isvalid(string s){
	stack<char> stk;
	for(int i=0;s[i]!='\0';i++){
		if(s[i]=='('){
			stk.push(s[i]);
		}
		else if(s[i]==')'){
			if(stk.empty()||stk.top()!='('){
				return false;
			}
			stk.pop();
		}
	}
	return stk.empty();
}
int main(){
	string s="((a+b)+(c+d)-t(s+x))";
	if(isvalid(s)){
		cout<<"yes,it's valid babe"<<endl;
	}
	else{
		cout<<"bhaaad me jao please"<<endl;
	}
}