#include <iostream>
#include<algorithm>
using namespace std;

int main() {

    int a = 10;
    int b = 20;

    swap(a, b);
    cout << a << " and " << b << endl;

    cout << max(a, b) << endl;
    cout << min(a, b) << endl;

    int arr[] = {1, 2, 3, 4, 4, 5};
    reverse(arr, arr + 4);

    swap(arr[0], arr[1]);

    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    next_permutation(arr, arr + n);
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
