#include<iostream>
using namespace std;


int main() {

	//Check if a given number is Prime
	int n;
	cin >> n;

	int i;

	for (i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			cout << n << "is not Prime" << endl;
			break;
		}
	}
	//Remember this check is important
	if (i == n) {
		cout << n << " is prime!" << endl;
	}

	return 0;
}