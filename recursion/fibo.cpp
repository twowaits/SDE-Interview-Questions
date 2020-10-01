#include<iostream>
using namespace std;
int fibo(int n){
	if(n==0)return 0;
	if(n==1)return 1;
	return fibo(n-1)+fibo(n-2);
}
int main(){
	int n;
	cin>>n;
	cout<<fibo(n)<<endl;
}