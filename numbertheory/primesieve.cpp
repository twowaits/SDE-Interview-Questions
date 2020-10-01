#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void primesieve(int *arr){
	for(int i=3;i<=1000;i+=2){
		arr[i]=1;
	}
	for(int i=3;i<=1000;i+=2){
		if(arr[i]==1){
			for(int j=i*i;j<=1000;j+=i){
				arr[j]=0;
			}
		}
	}
	arr[2]=1;
	arr[0]=arr[1]=0;
}
int main(){
	int n;
	cin>>n;
	int arr[1000]={0};
	primesieve(arr);
	for(int i=0;i<=n;i++){
		if(arr[i]==1){
			cout<<i<<" ";
		}
	}
	int csum[1000]={0};
	for(int i=1;i<1000;i++){
		csum[i]=csum[i-1]+arr[i];
	}
	int queries;
	cin>>queries;
	while(queries--){
		int a,b;
		cin>>a>>b;
		cout<<csum[b]-csum[a-1]<<endl;
	}
	

}