#include<iostream>
using namespace std;


int main() {

	//Comma Operator
	int a, b, c;

	// Assignment Operator
	a = 10;
	b = 20;
	c = 30;

	//Logical Operator
	if (c > a and c > b) {
		cout << "C is largest" << endl;
	}


	// Ternary Operator
	int x = c % 2 == 0 ? 1 : 0;
	cout << x << endl;
	c % 2 == 0 ? cout << "Even" : cout << "Odd";
	cout << endl;

	// Bitwise Operator
	x = 5;
	int y = 7;
	cout << "AND " << (x & y) << endl;
	cout << " OR " << (x | y) << endl;
	cout << "XOR " << (x ^ y) << endl;

	// Shift Operator
	x = x << 2;

	cout << x << endl; // 20
	cout << (y >> 1) << endl; //3
	// Unary Operator

	// Address Of
	cout << (&x) << endl;

	//Post Increment / Decrement Operator
	a = 10;
	int z = a++; //z = 10, a = 11
	cout << z << endl; // 10
	z = ++a; // a = 12, z = 12
	cout << z << endl; // 12

	// Compound Assingment Operator
	a = 10;
	a *= 3;
	cout << "A after multiply " << a << endl; // 30
	a %= 5;
	cout << "A after modulo " << a << endl; //0

	b = 5;
	b <<= 1 ;
	cout << "B after left shift" << b << endl; //10



	return 0;
}