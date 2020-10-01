#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int mycompare(string a,string b){
	string ab=a.append(b);
	string ba=b.append(a);
	return ab.compare(ba)>0?1:0;
}
void form(vector<string> arr,int n){
	sort(arr.begin(),arr.end(),mycompare);
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
	}
	cout<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<string> arr;
		string x;
		for(int i=0;i<n;i++){
			cin>>x;
			arr.push_back(x);
		}
		form(arr,n);
	}
	
	return 0;
}