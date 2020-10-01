#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Stack{
	queue<int> q1,q2;
public:
	void push(int x){
		q1.push(x);
	}
	int size(){
		return q1.size()+q2.size();
	}
	bool empty(){
		return size()==0;
	}
	void pop(){
		if(q1.empty())return;
		while(q1.size()>1){
			int x=q1.front();
			q1.pop();
			q2.push(x);
		}
		q1.pop();
		swap(q1,q2);
	}
	int top(){
		
		while(q1.size()>1){
			int x=q1.front();
			q1.pop();
			q2.push(x);
		}
		int x=q1.front();
		swap(q1,q2);
		return x;
	}
};
int main(){
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}