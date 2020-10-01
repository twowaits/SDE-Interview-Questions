#include<iostream>
using namespace std;
#include<algorithm>
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)cin>>arr[i];
		if(!next_permutation(arr,arr+n)){
			sort(arr,arr+n);
		}
		else{
			next_permutation(arr,arr+n);
		}
		for(int i=0;i<n;i++)cout<<arr[i]<<" ";
		cout<<endl;
	}
	return 0;
}
/*for(int i=n-2;i>=0;i--){
	if(arr[i]<arr[i+1]){
		p=i;
		break;
	}

}
for(int i=n-1;i>0;i--){
	if(arr[i]>arr[p]){ q=arr[i];break;}
}
swap(q,arr[p]);
sort(arr+p,arr+n);
