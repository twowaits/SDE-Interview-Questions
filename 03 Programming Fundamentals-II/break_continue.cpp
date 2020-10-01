#include<iostream>
using namespace std;



int main(){

	//Break - that is used to stop a loop based upon certain condition


	//Problem Statement - Read a stream of numbers until you get a mutiple of 7
	int no;
	// Accept and Print Numbers until you get a number which is multiple of 7
	// and you will skip all numbers which are multiple of 13 and 7

	while(true){
		//No Stopping Condtion as of now
		cin>>no;

		if(no%13==0){
			continue; //multiple times
		}

		if(no%7==0){
			break; // only once
		}
		cout<<"No "<<no<<endl;
		
	}

	cout<<"Came of the Loop!";


	return 0;
}