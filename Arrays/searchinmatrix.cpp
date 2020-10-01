#include<iostream>
using namespace std;
#include<algorithm>
void find(int **arr,int n,int m,int key){
	int min=arr[0][0];
	int max=arr[n-1][m-1];
	if(key<min || key>max){cout<<0<<endl;return;}
	int i=0;
	int j=m-1;
	while(i<n && j>=0){
		if(arr[i][j]==key){cout<<1<<endl;return ;}
		if(arr[i][j]>key)j++;
		else i--;
	}
	cout<<0<<endl;
	return;

}
int main() {
	int n,m;
	cin>>n>>m;
	int **arr=new int*[n];
	for(int i=0;i<n;i++)
		arr[i]=new int[m];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	int key;
	cin>>key;
	find(arr,n,m,key);
	return 0;
}