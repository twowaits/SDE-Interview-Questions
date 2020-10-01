#include<iostream>
using namespace std;

void generate_paranthesis(char *a, int n, int open = 0, int close = 0, int i = 0) {
	//base case
	if (i == 2 * n) {
		a[i] = '\0';
		cout << a << endl;
		return;
	}

	//open
	if (open < n) {
		a[i] = '(';
		generate_paranthesis(a, n, open + 1, close, i + 1);
	}

	//closing
	if (close < open) {
		a[i] = ')';
		generate_paranthesis(a, n, open, close + 1, i + 1);
	}
	return;
}


int main() {


	char output[100];
	int n;
	cin >> n;
	generate_paranthesis(output, n);


	return 0;
}