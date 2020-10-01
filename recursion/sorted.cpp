#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
	if(n==0 || n==1)return true;
	if(arr[0]<arr[1] && issorted(arr+1,n-1))return true;
	return false;
}
int main(){
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	cout<<issorted(arr,n)<<endl;
}