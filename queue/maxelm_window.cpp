#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"enter array elemnts"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	deque<int> q;
	int k;
	cout<<"enter k"<<endl;
	cin>>k;
	int i;
	for(i=0;i<k;i++){
		while(!q.empty() && arr[i]>arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	for(;i<n;i++){
		cout<<arr[q.front()]<<" ";
		while(!q.empty() && q.front()<i-k+1){
			q.pop_front();
		}
		while(!q.empty() && arr[i]>arr[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
	}
	cout<<arr[q.front()];
}