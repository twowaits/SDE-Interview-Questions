#include<iostream>
using namespace std;

//Fiboacci Series - Nth Fibonacci Number

//0 , 1, 1, 2, 3, 5, 8 , 13 ....

int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int c;

	for (int i = 1; i <= n - 1; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;

}

int main() {

	int n;
	cin >> n;
	cout << fibonacci(n) << endl;

	return 0;
}