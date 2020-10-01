#include<iostream>
using namespace std;


void findStrings(char *a, int i, int j, char *out) {
	//base case
	if (a[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	//rec case
	//1 . include single char
	int digit = a[i] - '0';
	char ch = digit + 'A' - 1; //generate
	out[j] = ch;
	//remaining call
	findStrings(a, i + 1, j + 1, out);

	// 2. include two char
	if (a[i + 1] != '\0') {
		int second_digit = a[i + 1] - '0';
		int no = 10 * digit + second_digit;
		if (no <= 26) {
			ch = no + 'A' - 1;
			out[j] = ch;
			findStrings(a, i + 2, j + 1, out);
		}
	}
}

int main() {

	char a[10];
	char output[10];

	cin >> a;
	findStrings(a, 0, 0, output);




}