#include<iostream>
using namespace std;

int decimalToBinary(int n) {

	int ans = 0;
	int p = 1;

	while (n > 0) {
		int last_bit = (n & 1);
		ans += p * last_bit;

		p = p * 10;
		n = n >> 1;
	}

	return ans;
}


int main() {

	//Given a Number N, find number of set bits in binary rep. of it
	int n;
	cin >> n;
	cout << decimalToBinary(n);
	cout << endl;
	return 0;
}