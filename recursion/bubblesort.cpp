#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
	if(n==1)return;
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
	}
	bubble_sort(arr,n-1);
}
void bubble(int arr[],int j,int n){
	///base cndt
	if(n==1)return;
	if(j==n-1){
		return bubble(arr,0,n-1);
	}
	//recursive cnd
	if(arr[j]>arr[j+1]){
		swap(arr[j],arr[j+1]);
	}
	bubble(arr,j+1,n);
	return;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	//bubble_sort(arr,n);
	bubble(arr,0,n);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}