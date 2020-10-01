#include<iostream>
using namespace std;

//Conditional Statements in C++

int main(){

	int n;
	cin>>n;

	//Program to check if a Number is divisble by 2, div by 3 and both
	// if else-if else

	// else-if block if you want only one of the blocks is executed
	/*
	if
	else if
	else if
	else if
	else

	*/

	if(n%2==0 and n%3==0){
		cout<<n<<" is div by 2 and 3"<<endl;
		cout<<"If block!"<<endl;
	}
	//all other blocks below the block which is executed are skipped

	//If-Else block is independent of the above if block
	else if(n%2==0){
		cout<<n<<" is div by 2"<<endl;
		cout<<"else If-1 block!"<<endl;

	}

	else if(n%3==0){
		cout<<n<<" is div by 3"<<endl;
		cout<<"else If-2 block!"<<endl;
	}
	else{
		cout<<"Not Divisible!"<<endl;
		cout<<"Else block"<<endl;
	}

	return 0;
}