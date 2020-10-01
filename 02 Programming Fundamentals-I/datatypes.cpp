#include<iostream>
using namespace std;

int main(){


	//Primitive Datatypes
	//int , float, bool, double, char

	int x = 5000; 
	float y = 10.141;
	bool weather_is_rainy = true;
	double pi = 3.141131212121;
	char ch = 'A';

	// How much memory each is going to occupy!
	cout<< "Int " <<sizeof(x) <<endl; // 4 bytes
	cout<<" Float "<<sizeof(y) <<endl; // 4 bytes

    cout<< "Bool " <<sizeof(weather_is_rainy) <<endl; // 1 byte
	cout<<" Double "<<sizeof(pi) <<endl; // 8 bytes
	cout<< " Char "<<sizeof(ch)<<endl; // 1 byte

	







	return 0;
}