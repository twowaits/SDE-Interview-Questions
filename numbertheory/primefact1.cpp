#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> primesieve(int *arr,int n){
	arr[2]=1;
	arr[0]=arr[1]=0;
	for(int i=3;i<=n;i+=2){
		arr[i]=1;
	}
	for(int i=3;i<=n;i+=2){
		if(arr[i]==1){
			for(int j=i*i;j<=1000;j+=2*i){
				arr[j]=0;
			}
		}
	}
	vector<int> primes;
	primes.push_back(2);
	for(int i=3;i<=n;i+=2){
		if(arr[i]==1){
			primes.push_back(arr[i]);
		}
	}
	
}
vector<int> factorize(int num,vector<int> &primes){
	vector<int> factors;
	factors.clear();
	int i=0;
	int p=primes[0];
	while(p*p<=num){
		if(num%p==0){
			factors.push_back(p);
			while(num%p==0){
				num=num/p;
			}
		}
		i++;
		p=primes[i];
	}
	if(num!=1){
		factors.push_back(num);
	}
	return factors;
}
int main(){
	int n=1000;
	int p[n]={0};
	vector<int> primes=primesieve(p,100);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> factors=factorize(n,primes);
		for(auto f:factors){
			cout<<f<<" ";
		}
		cout<<endl;
	}
}