#include<iostream>
using namespace std;
int merge(int arr[],int s,int e){
	int temp[100];
	int mid=(s+e)/2;
	int i=s,j=mid+1,k=s;
	int cnt=0;
	while(i<=mid && j<=e){
		if(arr[i]<=arr[j]){
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
			cnt+=mid-i+1;
		}
	}
	while(i<=mid)temp[k++]=arr[i++];
	while(j<=e)temp[k++]=arr[j++];
	for(int i=s;i<=e;i++)temp[i]=arr[i];
		return cnt;
}
int invcnt(int arr[],int s,int e){
	if(s>=e)return 0;
	int mid=(s+e)/2;
	int x=invcnt(arr,s,mid);
	int y=invcnt(arr,mid+1,e);
	int z=merge(arr,s,e);
	return x+y+z;
}
int main(){
	int arr[]={4,1,9,3,8,7};
	int n=sizeof(arr)/sizeof(int);
	cout<<invcnt(arr,0,n-1)<<endl;
}