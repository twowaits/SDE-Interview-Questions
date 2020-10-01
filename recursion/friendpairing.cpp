#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int f(int n){
	if(n==0)return 1;
	if(n==1)return 1;
	return f(n-1)+f(n-2)*(n-1);
}
int main(){
	int n;
	cin>>n;
	cout<<f(n);
}