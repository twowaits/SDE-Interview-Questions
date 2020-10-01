#include<iostream>
using namespace std;


int main(){

	int n;
	cin>>n;


	//Initialisation
	int sum = 0;

	//Stopping Criteria
	while(n>0){
		int last_digit = n%10;
		sum = sum + last_digit;

		//Update Statement
		n = n/10;

	}

	//Print the ans
	cout<<"Sum of Digits is "<<sum<<endl;


	return 0;
}