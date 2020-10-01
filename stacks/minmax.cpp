#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class minmaxi
{
	vector<int> stack;
	vector<int> minstack;
	vector<int> maxstack;
public:
	void push(int data){
		int currmin=data;
		int currmax=data;
		if(minstack.size()){
			currmin=min(minstack[minstack.size()-1],currmin);
			currmax=max(maxstack[maxstack.size()-1],currmax);
		}
		minstack.push_back(currmin);
		maxstack.push_back(currmax);
		stack.push_back(data);
	}
	int top(){
		return stack[stack.size()-1];
	}
	int getmin(){
		return minstack[minstack.size()-1];
	}
	int getmax(){
		return maxstack[maxstack.size()-1];
	}
	void pop(){
		stack.pop_back();
		minstack.pop_back();
		maxstack.pop_back();
	}
	
};
int main(){
	minmaxi s;
	s.push(1);
	s.push(3);
	s.push(5);
	s.push(7);
	s.pop();
	cout<<s.getmax()<<endl;
	cout<<s.getmin()<<endl;
	cout<<s.getmin()<<endl;
}