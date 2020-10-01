#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void find(int n){
	vector<pair<int,int>> v;
	int cnt;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			cnt=0;
			while(n%i==0){
				cnt++;
				n=n/i;
			}
			v.push_back(make_pair(i,cnt));
		}
	}
	if(n!=1)v.push_back(make_pair(n,1));
	for(auto p:v){
		cout<<p.first<<"^"<<p.second<<endl;
	}
	return;
}
int main(){
	int n;
	cin>>n;
	find(n);
}