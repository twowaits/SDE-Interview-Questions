#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<string>
void permut(char input[],int idx,set<string> &s){
	if(input[idx]=='\0'){
		string t(input);
		s.insert(t);
		return;
	}
	for(int j=idx;input[j]!='\0';j++){
		swap(input[j],input[idx]);
		permut(input,idx+1,s);
		swap(input[j],input[idx]);
	}
}
int main(){
	char input[1000];
	cin>>input;
	set<string> s;
	permut(input,0,s);
	for(auto x:s){
		cout<<x<<" ";
	}
}