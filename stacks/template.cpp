#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template <typename T>
class Stack{
private:
	vector<T> v;
public:
	void push(T data){
		v.push_back(data);
	}
	int top(){
		return v[v.size()-1];
	}
	bool empty(){
		return v.size()==0;
	}
	void pop(){
		if(!empty()){
			v.pop_back();
		}
	}
};
int main(){
	Stack<int> s;
	for(int i=1;i<=5;i++){
		s.push(i*i);
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}