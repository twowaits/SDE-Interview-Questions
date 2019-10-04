#include<bits/stdc++.h>
using namespace std;
bool findprod(int arr[],int n,int x){
    if(n<2)
    return false;
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            if(x==0){
                return true;
            }
        }
        if(x%arr[i]==0){
            if(s.find(x/arr[i])!=s.end()){
              return true;
            }
            s.insert(arr[i]);
        }
        
}
return false;
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n,x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        findprod(arr,n,x)? cout << "Yes\n"
                       : cout << "No\n";
    }
}