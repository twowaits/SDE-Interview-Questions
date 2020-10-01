#include<iostream>
using namespace std;
#include<algorithm>
int main(){
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(int);
	reverse(arr,arr+4);
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	swap(arr[0],arr[1]);
	cout<<endl;
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	next_permutation(arr,arr+n);
	cout<<endl;
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}