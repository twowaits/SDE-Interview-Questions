#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<climits>
int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int left[n];
	int right[n];
	left[0]=arr[0];
	for(int i=1;i<n;i++){
		left[i]=max(left[i-1],arr[i]);
	}
	right[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--){
		right[i]=max(right[i+1],arr[i]);
	}
	int water=0;
	for(int i=0;i<n;i++){
		water+=min(right[i],left[i])-arr[i];
	}
	cout<<water<<endl;
	return 0;
}