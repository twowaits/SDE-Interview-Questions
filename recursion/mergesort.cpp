#include<iostream>
using namespace std;
void merge(int arr[],int start,int end){
	int mid=(start+end)/2;
	int i=start,j=mid+1,k=start;
	int temp[100];
	while(i<=mid && j<=end){
		if(arr[i]<arr[j])temp[k++]=arr[i++];
		if(arr[i]>arr[j])temp[k++]=arr[j++];
	}
	while(i<=mid)temp[k++]=arr[i++];
	while(j<=end)temp[k++]=arr[j++];
	for(int i=start;i<=end;i++){
		arr[i]=temp[i];
	}
}
void mergesort(int arr[],int start,int end){
	if(start>=end)return;
	int mid=(start+end)/2;
	mergesort(arr,start,mid);
	mergesort(arr,mid+1,end);
	merge(arr,start,end);
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
		mergesort(arr,0,n-1);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}