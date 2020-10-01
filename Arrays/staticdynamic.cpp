#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int b[100];         //static
	cout<<sizeof(b)<<endl;
	cout<<b<<endl;            //symbol table
	int * a=new int[n];    //dynamic
	cout<<sizeof(a)<<endl;
	cout<<a<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
		cout<<a[i]<<" ";
	}
	cout<<endl;
	delete [] a;
}