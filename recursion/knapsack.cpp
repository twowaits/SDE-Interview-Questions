#include<iostream>
using namespace std;
int profit(int *weights,int *prices,int n,int c){
	if(n==0 || c==0)return 0;
	int x=0,y=0;
	if(weights[n-1]<=c)  x=prices[n-1]+profit(weights,prices,n-1,c-weights[n-1]);
	 y=profit(weights,prices,n-1,c);
	return max(x,y);
}
int main(){
	int n=4;
	int weights[]={1,2,3,5};
	int prices[]={40,20,30,100};
	int c=7;
	cout<<profit(weights,prices,n,c)<<endl;
}