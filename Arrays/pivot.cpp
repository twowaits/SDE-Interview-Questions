#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int find_pivot_in_rotated_array(int arr[],int n,int key){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==key)return mid;
		else if(arr[start]<=arr[mid]){
			if(arr[start]<=key && arr[end]>=key)end=mid-1;
			else start=mid+1;
		}
		else if(arr[mid]<=arr[end]){
			if(arr[mid]<=key && arr[end]>=key)start=mid+1;
			else end=mid-1;
		}
	}
	return -1;
}
int main(){
	int n,key;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cin>>key;
	cout<<find_pivot_in_rotated_array(arr,n,key);
	cout<<endl;
}