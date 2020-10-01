#include<iostream>
using namespace std;


int main(){
	//Program to find sum of numbers from 1 to N

	int n;
	//Take Input
	cin>>n;

	//Init Condition
	int i = 1;
	int sum = 0;


	while(i<=n){ //Stopping Criteria
		sum = sum + i;

		i = i + 1; //Update Statement
	}
	//Output the Sum
	cout<<sum<<endl;

	return 0;
}