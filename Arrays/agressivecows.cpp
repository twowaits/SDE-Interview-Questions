#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool cowsplace(int stall[],int n,int cows,int min){
	int lastcow=stall[0];
	int cnt=1;
	for(int i=1;i<n;i++){
		if(stall[i]-lastcow>=min){
			lastcow=stall[i];
			cnt++;
			if(cnt==cows)return false;
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
		sort(arr,arr+n);
	int cows;
	cin>>cows;
	int start=0;
	int end=arr[n-1]-arr[0];
	int ans=0;
	while(start<=end){
		int mid=(start+end)/2;
		bool rakheyanhi=cowsplace(arr,n,cows,mid);
		if(rakheyanhi){
			ans=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
}