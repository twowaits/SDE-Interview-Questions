#include<iostream>
using namespace std;

#define ll long long

//Naive Approach O(sqrtN)
bool isPrime(int n) {
	if (n == 1) {
		return false;
	}
	if (n == 2) {
		return true;
	}
	for (int i = 2; i * i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

//Sieve Approach - Generate a array containing prime Numbers
void prime_sieve(int *p) {

	//first mark all odd number's prime
	for (int i = 3; i <= 1000000; i += 2) {
		p[i] = 1;
	}

	// Sieve
	for (ll i = 3; i <= 1000000; i += 2) {
		//if the current number is not marked (it is prime)
		if (p[i] == 1) {
			//mark all the multiples of i as not prime
			for (ll j = i * i; j <= 1000000; j = j + i ) {
				p[j] = 0;
			}
		}

	}
	//special case
	p[2] = 1;
	p[1] = p[0] = 0;

}



int main() {

	int n;
	cin >> n;

	int p[1000005] = {0};
	prime_sieve(p);

	//lets print primes upto range n
	for (int i = 0; i <= n; i++) {
		if (p[i] == 1) {
			cout << i << " ";
		}
	}




	return 0;
}