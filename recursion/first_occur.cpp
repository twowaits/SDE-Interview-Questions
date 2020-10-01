#include<iostream>
using namespace std;
int findoccur(int arr[],int n,int key){
	if(n==0)return -1;
	if(arr[0]==key)return 0;
	int i=findoccur(arr+1,n-1,key);
	if(i==-1)return -1;
	else{
		return i+1;
	}
}
int last_occur(int arr[],int n,int key){
	if(n==0)return -1;
	int i=last_occur(arr+1,n-1,key);
	if(i==-1){
		if(arr[0]==key)return 0;
		else return -1;
	}
	return i+1;
}
void alloccur(int arr[],int i,int n,int key){
	if(i==n)return ;
	if(arr[i]==key)cout<<i<<" ";
	alloccur(arr,i+1,n,key);
}
int linear_search(int arr[],int i,int n,int key){
	if(i==n)return -1;
	if(arr[i]==key)return i;
	return linear_search(arr,i+1,n,key);
}
int storeocc(int arr[],int output[],int n,int key,int i,int j){
	if(i==n)return j;
	if(arr[i]==key){
		output[j]=i;
		return storeocc(arr,output,n,key,i+1,j+1);
	}
	return storeocc(arr,output,n,key,i+1,j);
}
int main(){
	int arr[]={1,2,3,5,8,3,7,3};
	int key=3;
	int n=sizeof(arr)/sizeof(int);
	//cout<<findoccur(arr,n,key)<<endl;
	cout<<linear_search(arr,0,n,key);
	cout<<last_occur(arr,n,key)<<endl;
	alloccur(arr,0,n,key);
	cout<<endl;
	int output[100];
	int cnt=storeocc(arr,output,n,key,0,0);
	for(int i=0;i<cnt;i++){
		cout<<output[i]<<" ";
	}
}