#include<iostream>
using namespace std;

void sayHello() {

	cout << "Hello Everyone!";

}

int factorial(int n) {
	int ans = 1;
	for (int i = 2; i <= n; i++) {
		ans = ans * i;
	}
	return ans;
}



int main() {

	cout << "Before Function!" << endl;

	sayHello();
	cout << endl << "After Function!" << endl;


	//2. part
	int n;
	cout << "Enter a number";
	cin >> n;
	factorial(n);


	cout << factorial(n) << endl;;

	return 0;
}