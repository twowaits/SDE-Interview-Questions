#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    rotate(arr, arr + 2, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    //Apply the same on a vector
    vector<int> v{1, 2, 3};

    //rotate(v.begin(),v.begin()+3,v.end());

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    //Next_permuation
    next_permutation(v.begin(), v.end());
    next_permutation(v.begin(), v.end());
    cout << endl;
    //for each loop
    for (int x : v) {
        cout << x << " ";
    }




    return 0;
}
