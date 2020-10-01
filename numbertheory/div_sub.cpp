#include<iostream>
using namespace std;
#include<cstring>
#define ll long
ll arr[1000],pre[1000];
int main(){
	int t;
	cin>>t;

	while(t--){
		memset(pre,0,sizeof(pre));
		pre[0]=1;
		int n;
		cin>>n;
		int sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			sum+=arr[i];
			sum=sum%n;
			sum=(sum+n)%n;
			pre[sum]++;
		}
		ll ans=0;
		for(int i=0;i<n;i++){
			ll m=pre[i];
			ans+=m*(m-1)/2;
		}
		cout<<ans<<endl;
	}
}