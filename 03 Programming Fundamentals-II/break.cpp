#include<iostream>
using namespace std;



int main(){

	//Break - that is used to stop a loop based upon certain condition


	//Problem Statement - Read a stream of numbers until you get a mutiple of 7
	int no;

	while(true){
		//No Stopping Condtion as of now
		cin>>no;
		if(no%7==0){
			//Stop Processing More Numbers;
			//break // Take you line 21
			continue; //Take you out to line number 14, skip line 21
			//starting of the loop!
		}
		cout<<"No "<<no<<endl;
	}

	cout<<"Came of the Loop!";


	return 0;
}