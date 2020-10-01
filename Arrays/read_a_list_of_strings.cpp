#include<iostream>
using namespace std;


int main() {

	char a[100][1000];

	//Read a list of strings and we will store them in a 2d character array
	int n;
	cin >> n;

	cin.get();
	for (int i = 0; i < n; i++) {
		cin.getline(a[i], 1000);
	}

	//Print out all the strings
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}







	return 0;
}