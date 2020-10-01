#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	int target;
	cin>>target;
	for(int i=0;i<n;i++){
		int x=arr[i];
		int left=i+1;
		int right=n-1;
		while(left<right){
			if(arr[left]+arr[right]+x==target){
				cout<<x<<", "<<arr[left]<<" and "<<arr[right]<<endl;
				left++;
				right--;
			}
			else if(arr[left]+arr[right]+x>target){
				right--;
			}
			else left++;
		}
	}
	return 0;
}