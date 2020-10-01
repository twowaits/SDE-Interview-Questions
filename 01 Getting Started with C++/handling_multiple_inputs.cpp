#include<iostream>
using namespace std;


int main(){
	// You are given N, followed by list of N numbers
	// Output : the squares of N Numbers
	/* 

	Input File
	3 N
	1 
	2 No
	5 

	Output File
	1  
	4  Ans
	25 
	*/
	int N;
	cin>>N;

	int no;
	while(N>0){
		cin>>no;
		cout<<no*no<<endl;

		N = N - 1;
	}
	return 0;
}