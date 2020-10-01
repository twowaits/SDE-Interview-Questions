#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void find(int prices[],int n,int span[]){
	stack<int> s;
	s.push(0);
	span[0]=1;
	for(int i=1;i<=n-1;i++){
		while(!s.empty() && prices[s.top()]<=prices[i]){
			s.pop();
		}
		if(!s.empty()){
			span[i]=i-s.top();
		}
		else{
			span[i]=i+1;
		}
		s.push(i);
		
	}

}
int main(){
	int prices[]={120,85,65,23,90,126,230,34,76,98};
	int n=sizeof(prices)/sizeof(int);
	int span[100]={0};
	find(prices,n,span);
	for(int i=0;i<n;i++)cout<<span[i]<<" ";
}