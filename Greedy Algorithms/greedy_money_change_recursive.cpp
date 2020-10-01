#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int indian_currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
int n = sizeof(indian_currency) / sizeof(int);


bool compare(int a, int b) {
    return a <= b;
}


// Binary Search + Recursion + STL
void count_notes(int money, vector<int> &v) {

    if (money == 0) {
        return;
    }

    int idx = lower_bound(indian_currency, indian_currency + n, money, compare) - indian_currency - 1;
    int m = indian_currency[idx];
    v.push_back(m);

    //Recursive Call
    count_notes(money - m, v);
}
int main() {
    //Indian Coin Change
    int money ;
    cin >> money;

    // Money Change
    vector<int> v;

    //Make a Recursive Call
    count_notes(money, v);

    // For Each Loop
    for (int note : v) {
        cout << note << " + ";
    }
    cout << "0" << endl;

    cout << v.size() << " notes needed!" << endl;
    return 0;
}
