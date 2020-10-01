#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class student{
public:
	int marks;
	string name;
};
void bucket(student s[],int n){
	vector<student> v[101];
	for(int i=0;i<n;i++){
		int marks=s[i].marks;
		v[marks].push_back(s[i]);
	}
	for(int i=100;i>=0;i--){
		for(vector<student> ::iterator it=v[i].begin();it!=v[i].end();++it){
			cout<<(*it).name<<" "<<(*it).marks<<endl;
		}
	}
}
int main(){
	student s[1000];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i].marks>>s[i].name;
	}
	bucket(s,n);
}