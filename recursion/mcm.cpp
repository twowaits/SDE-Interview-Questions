#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int mcm(int arr[],int i,int j){
	//base condition
	if(i>=j)return 0;
	int mini=INT_MAX;
	for(int k=i;k<=j-1;k++){
		int tempans=mcm(arr,i,k)+mcm(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		if(tempans<mini)mini=tempans;
	}
	return tempans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<mcm(arr,i+1,j);
}