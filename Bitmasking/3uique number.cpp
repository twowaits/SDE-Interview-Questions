#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	int num,no;
	int cnt[64]={0};
	cin>>num;
	
	for(int i=0;i<num;i++){
		cin>>no;
		int j=0;
		while(no>0){
			int last_bit=no&1;
			cnt[j]+=last_bit;
			j++;
			no=no>>1;
		}
	}
	int ans=0,p=1;
	for(int i=0;i<64;i++){
		cnt[i]=cnt[i]%3;
		ans+=cnt[i]*p;
		p=p<<1;
	}
	cout<<ans<<endl;
}