#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool ispossible(int n,int m,int x,int y,int mid){
	if(mid*x<=m+(n-mid)*y)return true;
	return false;
}
int main(){
	int n,m,x,y;
	cin>>n>>m>>x>>y;
	int ans=INT_MIN;
	int low=0;
	int high=n;
	while(low<=high){
		int mid=(low+high)/2;
		if(ispossible(n,m,x,y,mid)){
			ans=max(mid,ans);
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
	cout<<ans<<endl;
}