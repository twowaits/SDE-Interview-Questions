#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(int a, int b) {
    return a <= b;
}

vector<int> count_notes(int money) {

    int indian_currency[] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
    int n = sizeof(indian_currency) / sizeof(int);

    int ans = 0;
    vector<int> notes;

    while (money > 0) {
        int idx = lower_bound(indian_currency, indian_currency + n, money, compare) - indian_currency - 1;
        int m = indian_currency[idx];
        notes.push_back(m);
        money = money - m;
        ans++;
    }
    return notes;
}

int main() {
    //Indian Coin Change
    int money ;
    cin >> money;
    vector<int> notes = count_notes(money);
    for (int note : notes) {
        cout << note << " + ";
    }
    cout << "0" << endl;
    return 0;
}
