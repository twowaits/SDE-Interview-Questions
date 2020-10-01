#include<iostream>
using namespace std;
#include<algorithm>
#include<bits/stdc++.h>
#include<cstring>
class car
{
public:
	string name;
	int x,y;
	car(){}
	car(string name,int x,int y){
		this->name=name;
		this->x=x;
		this->y=y;
	}
	int distance(){
		return x*x +y*y;
	}
	
};
bool compare(car c1,car c2){
	int d1=c1.distance();
	int d2=c2.distance();
	if(d1==d2){
		return c1.name.length()<c2.name.length();
	}
	return d1<d2;
}
int main(){
	int n;
	cin>>n;
	vector<car> v;
	for(int i=0;i<n;i++){
		string name;
		int x,y;
		cin>>name>>x>>y;
		car temp(name,x,y);
		v.push_back(temp);
	}
	sort(v.begin(),v.end(),compare);
	for(auto c:v){
		cout<<"car "<<"name "<<c.name<<" location "<<c.x<<" "<<c.y<<"distance "<<c.distance()<<endl;
	}
	cout<<endl;
}