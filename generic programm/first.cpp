#include<iostream>
#include<bits/stdc++.h>
using namespace std;
template<typename T>
int findkey(T arr[],int n,T k){
	for(int i=0;i<n;i++){
		if(arr[i]==k){
			return i;
		}
	}
	return n;
}
int main(){
	int arr[]={9,6,3,0,2};
	int k=3;
	int n=sizeof(arr)/sizeof(int);
	cout<<findkey(arr,n,k)<<endl;
}