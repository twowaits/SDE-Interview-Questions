#include<iostream>
using namespace std;
#include<algorithm>
bool compare(int a,int b){
	return a<=b;
}
int main(){
	int money[]={23,54,60,78,100};
	int n=sizeof(money)/sizeof(int);
	int amt=160;
	while(amt>0){
		int lb=lower_bound(money,money+n,amt,compare)-money-1;
		int m=money[lb];
		cout<<m<<" ";
		amt-=m;
	}
	return 0;
}