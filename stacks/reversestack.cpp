#include<iostream>
using namespace std;
#include<stack>
void transfer(stack<int>&s1,stack<int>&s2,int num){
	for(int i=0;i<num;i++){
		s2.push(s1.top());
		s1.pop();
	}
}
void reverse(stack<int>&s1){
	stack<int> s2;
	int n=s1.size();
	for(int i=0;i<n;i++){
		int x=s1.top();
		s1.pop();
		transfer(s1,s2,n-i-1);
		s1.push(x);
		transfer(s2,s1,n-i-1);
	}
}
int main(){
	stack <int>s;
	for(int i=1;i<=5;i++){
		s.push(i);
	}
	reverse(s);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}