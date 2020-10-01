#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class Queue{
	list<int> l;
	int cs;
public:
	Queue(){
		cs=0;
	}
	bool isEmpty(){
		return cs==0;
	}
	void push(int data){
		l.push_back(data);
		cs++;
	}
	void pop(){
		if(!isEmpty()){
			l.pop_front();
		cs--;
		}
	}
	int front(){
		if(!isEmpty()){
			return l.front();
		}
	}
};
int main(){
	Queue q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	q.pop();
	q.pop();
	while(!q.isEmpty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}