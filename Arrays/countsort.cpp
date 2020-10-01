#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void count(int arr[],int n){
	int large=-1;
	for(int i=0;i<n;i++){
		large=max(large,arr[i]);
	}
	int *freq=new int[large]{0};
	for(int i=0;i<n;i++){
		freq[arr[i]]++;
	}
	int j=0;
	for(int i=0;i<large;i++){
		while(freq[i]>0){
			arr[j++]=i;
			freq[i]--;
		}
	}
}
int main(){
	int arr[]={88,44,21,90,45,21,89,65,9,34};
	int n=sizeof(arr)/sizeof(int);
	count(arr,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<endl;
}