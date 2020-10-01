#include<iostream>
using namespace std;
#include<bits/stdc++.h>
bool check(int n,int k,int t,int mid,int arr[]){
	int painter=1;
	int curr=0;
	for(int i=0;i<n;i++){
		if(curr+arr[i]*t>mid){
			painter++;
			curr=arr[i]*t;
			if(painter>k)return false;
		}
		else{
			curr+=arr[i]*t;
		}
	}
	return true;


}
int main(){
	int n,k,t;
	cin>>n>>k>>t;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];
	sort(arr,arr+n);
	int sum=0;
	for(int i=0;i<n;i++)sum+=arr[i];
	int low=arr[n-1]*t;
	int high=sum*t;
	int ans=INT_MAX;
	while(low<=high){
		int mid=(low+high)/2;
		if(check(n,k,t,mid,arr)){
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	cout<<ans<<endl;
}
/*
#include<iostream>
using namespace std;
#define ll long
#include <bits/stdc++.h>
bool check(ll int s,ll int e , ll int mid,ll int arr[],ll int k,ll int n,int t){
    ll int nsum = 0;
    int no_of_people = 1;  //Initially the number of people required will be 1
    for(int h =0;h<n;h++){   //No need to update mid
        if(nsum + arr[h]*t<= mid){
            nsum += arr[h]*t;

        }
        else{
            no_of_people++;
            nsum = arr[h]*t;
            if(no_of_people>k)  //You have to check this condition here.
            return false;
            
        }
    }

        
    return true;
    
            
    
    
}

int main() {
ll int k,n,t;
cin>>n>>k>>t;
ll int sum = 0;
ll int arr[1000];
ll int MAx = 0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    
MAx = max(MAx,arr[i]);
}

for(int j=0;j<n;j++){
    sum += arr[j];
}

ll int s = MAx*t;
ll int e = sum*t;
ll int mid = (s+e)/2;
ll int ans=s*t;  //Minimum number of people required would be greater than equal to s, so intialise this value otherwise it will print garbage value if not went into while loop below.
while(s<=e){   
   mid = (s+e)/2;
    if(check(s,e,mid,arr,k,n,t)){
      
        ans = mid;
          e = mid - 1;
    }
    else{
        s = mid + 1;
    }
}
cout<<ans<<"\n";

}
*/