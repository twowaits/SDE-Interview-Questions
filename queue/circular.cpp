#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class queues{
	int *arr;
	int f,r,cs,ms;
public:
	queues(int ds=5){
		arr=new int [ds];
		cs=0;
		ms=ds;
		f=0;
		r=ms-1;
	}
	bool full(){
		return cs==ms;
	}
	bool empty(){
		return cs==0;
	}
	void push(int x){
		if(!full()){
			r=(r+1)%ms;
			arr[r]=x;
			cs++;
		}
	}
	void pop(){
		if(!empty()){
			f=(f+1)%ms;
			cs--;
		}
	}
	int front(){
		return arr[f];
	}
	~queues(){
		if(arr!=nullptr){
			delete [] arr;
			arr=nullptr;
		}
	}

};
int main(){
	queues q;
	for(int i=1;i<=5;i++){
		q.push(i);
	}
	q.pop();
	q.pop();
	q.push(11);
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
}