#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int static dp[1001][1001];
int mcm(int arr[],int i,int j){
	//base condition
	if(i>=j)return 0;
	if(dp[i][j]!=-1)return dp[i][j];
	int mini=INT_MAX;
	for(int k=i;k<=j-1;k++){
		int tempans=mcm(arr,i,k)+mcm(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
		if(tempans<mini)mini=tempans;
	}
	return dp[i][j]=tempans;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<n;i++)cin>>arr[i];
	cout<<mcm(arr,i+1,j);
}