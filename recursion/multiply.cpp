#include<iostream>
using namespace std;
int product(int a,int b){
	if(a<b)swap(a,b);
	if(b!=0){
		return a+product(a,b-1);
	}
	else return 0;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<product(a,b)<<endl;
}