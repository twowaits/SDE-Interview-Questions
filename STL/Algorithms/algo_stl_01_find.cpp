#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int arr[] = {1, 10, 11, 9, 100};
    int n = sizeof(arr) / sizeof(int);
    //Search --> find

    int key ;
    cin >> key;
    auto it = find(arr, arr + n, key);
    int index = it - arr;
    if (index == n) {
        cout << key << " not present";
    }
    else {
        cout << "Present at index " << index;
    }


    return 0;
}
/*int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(arr[0]);
auto it=find(arr,arr+n,key);
if(it==n){
    cout<<"not present";
}
else{
    cout<<it-arr<<endl;
}*/
/*void bubble_sort(int a[],int n,bool &cmp(int a,int b)){
    
}