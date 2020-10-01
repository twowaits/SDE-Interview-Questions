#include<iostream>
using namespace std;
int divisors(int num,vector<int> &primes){
	int ans=0;
	
	int i=0;
	int p=primes[0];
	while(p*p<=num){
		if(num%p==0){
			int cnt=0;
			while(num%p==0){
				num=num/p;
				cnt++;
			}
			ans=ans*(cnt+1);
		}
		i++;
		p=primes[i];
	}
	if(num!=1){
		ans=ans*2;
	}
	return factors;
}
int main(){

}