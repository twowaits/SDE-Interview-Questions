#include<iostream>
using namespace std;


int main () {

	int n ;
	cin>>n;

	int row = 1;
	while(row<=n){
		int col = 1;

		if(row%2!=0){
			//Odd Row
			while(col<=row){
				cout<<1;
				col = col + 1;
			}

		}
		else{
			//Even Row
			cout<<1;
			while(col<=row-2){
				cout<<0;
				col = col + 1;
			}
			cout<<1;
		}
		cout<<endl;
		row = row + 1;
	}

	return 0;
}