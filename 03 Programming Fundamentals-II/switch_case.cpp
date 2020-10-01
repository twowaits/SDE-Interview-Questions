#include<iostream>
using namespace std;

int main() {

	//Switch Case
	/* Design a Menu - where pressing a button gives you the corresponding item

	B - Burger
	M - Maggi
	P - Pizza
	C - Coke
	D - Dosa
	.
	.
	and so on!
	*/
	char ch;
	cin >> ch;
	int pizza_orders = 0;

	switch (ch) {
	case 'B' : cout << "Burger" << endl;
		break;

	case 'm' :
	case 'M' : cout << "Maggi" << endl;
		break;

	case 'p' :
	case 'P' : cout << "Pizza" << endl;
		pizza_orders++;

		break;

	default : cout << "Item not available!" << endl;
	}



	return 0;
}