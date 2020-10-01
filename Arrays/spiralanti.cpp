#include<iostream>
using namespace std;
void spiral_print(int arr[][100],int m,int n){
	int start_row=0;
	int start_col=0;
	int end_row=m-1;
	int end_col=n-1;
	while(start_row<=end_row && start_col<=end_col){
		for(int i=start_row;i<=end_row;i++){
			cout<<arr[i][start_col]<<", ";
		}
		start_col++;
		
		for(int i=start_col;i<=end_col;i++){
			cout<<arr[end_row][i]<<", ";
		}
		end_row--;
		if(end_col>start_col){
			for(int i=end_row;i>=start_row;i--){
				cout<<arr[i][end_col]<<", ";
			}
			end_col--;
		}
		if(end_row>start_row){
		for(int i=end_col;i>=start_col;i--){
			cout<<arr[start_row][i]<<", ";
		}
		start_row++;}
	}
	cout<<"END"<<endl;
}
int main() {
	int m,n;
	cin>>m>>n;
	int arr[100][100];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	spiral_print(arr,m,n);

	return 0;
}