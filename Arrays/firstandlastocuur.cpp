#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int first(int arr[],int key,int n){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key){
			ans=mid;
			high=mid-1;
		}
		else if(arr[mid]>key){
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;
}
int last(int arr[],int key,int n){
	int low=0;
	int high=n-1;
	int ans=-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key){
			ans=mid;
			low=mid+1;
		}
		else if(arr[mid]>key){
			high=mid-1;
		}
		else low=mid+1;
	}
	return ans;
}
int main(){
	int arr[]={1,2,3,4,4,4,4,4,59};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	cout<<first(arr,key,n)<<" "<<last(arr,key,n)<<" ";
	cout<<endl;
}