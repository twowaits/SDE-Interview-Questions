#include<iostream>
using namespace std;
/*for li in range(0,n-1):
	for lj in range(0,n-1):
		for bi in range(li+1,n-1):
			for bj in range(lj+1,n-1):             //bruteforce approach(n^6)
				for i in range(li,bj):
					for j in range(lj,bj):
						sum+=arr[i,j];
*/
/*no of rows=(i+1)*(j+1)
no of colmns=(n-i)*(m-j)
sum+=arr[i][j]*rows*colmns*/
int sum(int **arr,int n,int m){
	int summy=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			summy+=arr[i][j]*(i+1)*(j+1)*(n-i)*(m-j);
		}
	}
	return summy;
}
int main(int argc, char const *argv[]){
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++){
		arr[i]=new int[m];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	cout<<sum(arr,n,m)<<endl;
}