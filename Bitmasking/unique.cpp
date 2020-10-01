#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,ans=0;
	for(int i=0;i<n;i++){
		cin>>x;
		ans=ans^x;
	}
	cout<<ans<<endl;
}