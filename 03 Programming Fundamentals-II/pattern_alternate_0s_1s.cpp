/*
Pattern Problem
N = 5
- For ith line print i numbers
- odd line start with 0, and value alternates btw 0 and 1
- even line start with 1, and value alternate btw 0 and 1
- print n lines

0
10
010
1010
01010
101010
*/

#include<iostream>
using namespace std;


int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int val = i % 2 == 0 ? 1 : 0;

		//Print i values in ith line
		for (int cnt = 1; cnt <= i; cnt++) {
			cout << val;
			val = 1 - val; // val = 1, val = 0, val = 1, ....
		}
		cout << endl;
	}

	return 0;
}