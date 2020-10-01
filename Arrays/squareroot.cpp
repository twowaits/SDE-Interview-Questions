#include<iostream>
using namespace std;
#include<bits/stdc++.h>
float find(int n,int p){
	int low=0;
	int high=n;
	float ans=-1;
	while(low<=high){
		int mid=(low+high)>>1;
		if(mid*mid==n)return mid;
		if(mid*mid <n){
			ans=mid;
			low=mid+1;
		}
		else high=mid-1;
	}
	float inc=0.1;
	for(int times=1;times<=p;times++){
		while(ans*ans <n){
			ans=ans+inc;
		}
		ans-=inc;  //overshoot that n
		inc/=10;
	}
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<find(n,3)<<endl;
}