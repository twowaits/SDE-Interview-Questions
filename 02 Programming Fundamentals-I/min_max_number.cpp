#include<iostream>
#include<climits>
using namespace std;


int main(){
	// Find the minimum and maximum of N Numbers
	int n;
	cin>>n;

	int min_so_far = INT_MAX;
	int max_so_far = INT_MIN;

	int no;
	// Without storing all the numbers, based upon the current number!
	for(int i=0;i<n;i++){
		cin>>no;
		if(no<min_so_far){
			min_so_far = no;
		}
		if(no>max_so_far){
			max_so_far = no;
		}
	}

	cout<<"Max No "<<max_so_far<<endl;
	cout<<"Min No "<<min_so_far<<endl;


	return 0;
}