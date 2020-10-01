#include<iostream>
#include<algorithm>
using namespace std;



int indian_currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int n = sizeof(indian_currency) / sizeof(int);

bool compare(int a, int b) {
	return a <= b;
}

void count_notes(int money) {

	// Base Case
	if (money == 0) {
		return;
	}
	//Recursive Case
	// lower_bound will return an iterator
	// Log (T) where T is the type of coins you have!

	int largest_idx = lower_bound(indian_currency, indian_currency + n, money, compare) - indian_currency - 1;
	int m =  indian_currency[largest_idx];
	cout << m << "  " << endl;

	//Recursive Call
	count_notes(money - m);

	return;

}

int main() {

	int money;
	cin >> money;

	count_notes(money);





	return 0 ;
}