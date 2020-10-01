#include<iostream>
using namespace std;
int fast_power(int a,int n){
	if(n==0)return 1;
	int small=fast_power(a,n/2);
	small*=small;
	if(n&1){
		return a*small;
	}
	return small;
}
int main(){
	int a,n;
	cin>>a>>n;
	cout<<fast_power(a,n);
}