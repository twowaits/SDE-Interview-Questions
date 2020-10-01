#include<iostream> 
using namespace std; 



int main(){ 

	// Simple Interest
	//Declare a variable 
	int p,r,t;
	float si;

	/* Assigns values to the buckets (storage in the memory)
	p = 10;
	r = 25;
	t = 1;
	*/
	cin>>p;
	cin>>r>>t;

	// 250/100 = 2.50
	// every statement should be terminated by a semi-colon

	si = p*r*t/100.0;

	// Typecasting -> Implicit 
	//integer/integer = integer 
	// float/integer = float
	// integer/float = float 


	cout<< si <<endl;


	/* This is 
	multi line comment */
	return 0; 
}