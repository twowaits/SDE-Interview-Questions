#include<iostream>
using namespace std;


int main() {

	int cliff_end = 10;
	int x = 10;

	while (x < cliff_end) {
		x = x + 1;
		cout << "Taking 1 step reaching :" << x << endl;
	}

	cout << "Final X " << x << endl;

	if (x == cliff_end) {
		cout << "We are standing at cliff edge!" << endl;
	}

	else if (x > cliff_end) {
		cout << "Falling from the cliff!" << endl;
	}



	return 0;
}