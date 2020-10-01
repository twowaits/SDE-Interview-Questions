#include<iostream>
using namespace std;


int main(){
	
	int cliff_end = 10;
	int x = 0;

	//for(start; stop; update){...}
	for( ; x<cliff_end; x = x + 1){
		cout<<"Taking 1 step reaching :"<<x<<endl;
	}

	return 0;
}