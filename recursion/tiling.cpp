#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long
ll int arr[1000];
int main()
 {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	for(int i=3;i<1000;i++){
	    arr[i]=arr[i-1]+arr[i-2];
	}
	while(t--){
	    int n;
	    cin>>n;
	    cout<<arr[n]<<endl;
	}
	return 0;
}