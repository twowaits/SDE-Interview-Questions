#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void insert(stack<int>&s,int data){
	//base 
	if(s.empty()){
		s.push(data);
		return;
	}
	int x=s.top();
	s.pop();
	insert(s,data);
	s.push(x);
}
void reverse(stack<int>&s){
	//base case
	if(s.empty())return;
	//rec case
	int x=s.top();
	s.pop();
	reverse(s);
	insert(s,x);
}
int main(){
	stack<int> s;
	for(int i=0;i<=5;i++){
		s.push(i);
	}
	reverse(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}