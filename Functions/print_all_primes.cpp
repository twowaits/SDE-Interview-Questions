#include<iostream>
using namespace std;

bool isPrime(int n) {


	for (int i = 2; i <= n - 1; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

//write a function to print all primes upto n
void printPrimes(int N) {

	for (int i = 2; i <= N; i++) {
		if (isPrime(i)) {
			cout << i << " ";
		}
	}
}


int main() {

	//Check if a given number is Prime
	int n;
	cin >> n;

	printPrimes(n);


	return 0;
}