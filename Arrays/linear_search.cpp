#include<iostream>
using namespace std;


// Linear Search

// A particular element in the array

int main() {


	int n, key;
	cin >> n;

	int a[1000];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//Ask for the element we want to search
	cout << "Enter the element you want to search  : ";
	cin >> key;

	//Find out the index of that element by traversing the array
	//Linear Search Algorithm
	int i;
	for ( i = 0; i <= n - 1; i++) {
		if (a[i] == key) {
			cout << key << " found at " << i << " index";
			break;
		}
	}
	if (i == n) {
		cout << key << "is not present " << endl;
	}

	return 0;

}