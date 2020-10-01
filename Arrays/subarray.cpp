#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,maxsum=INT_MIN;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int cumsum[n]={0};
		cumsum[0]=arr[0];
		for(int i=1;i<n;i++)
		{
			cumsum[i]=cumsum[i-1]+arr[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				int cum=cumsum[j]-cumsum[i-1];
				maxsum=max(maxsum,cum);
			}
		}
		cout<<maxsum<<endl;
	}
}