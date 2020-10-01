#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b(5,10); //five ints with value 10
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,4,5};

    int A[] = {1,2,3,4,5};
    vector<int> v;
    for(int i=0;i<5;i++){
        v.push_back(A[i]);
    }

    for(int x:v){
        cout<<x<<",";
    }
    //Size vs Capapcity vs Max Size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;
    cout<<d.max_size()<<endl;

     cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;

    return 0;
}
