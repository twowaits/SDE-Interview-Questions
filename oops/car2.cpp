#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class car{
private:
	float price;
public:
	char name[20];
	int model;
	car(){}
	car(float p,int model,char *name){
		cout<<"inside parametrized constructor "<<endl;
		price=p;
		this->model=model;
		strcpy(this->name,name);
	}
	car(car &x){
		cout<<" inside copy condtructor "<<endl;
		price=x.price;
		model=x.model;
		strcpy(name,x.name);
	}
	float get_discounted(float discount){
		return price*(1-discount);
	}
	float apply(float discount){
		return price=price*(1-discount);

	}
	void display(){
		cout<<"name "<<name<<" model "<<model<<" price "<<price<<endl;
	}
	float getprice(){
		return price;
	}
	void setprice(float p){
		float minp=121;
		if(p>0)price=p;
	}
};
int main(){
	car c;
	c.model=1210;
	//c.price=100;
	c.name[0]='A';
	c.name[1]='U';
	c.name[2]='D';
	c.name[3]='I';
	c.name[4]='\0';
	float p;
	cout<<"enter price" ;
	cin>>p;
	c.setprice(p);
	float y;
	cout<<"enter discount ";
	cin>>y;
	cout<<c.get_discounted(y);
	c.display();
	car d(234,11120,"bmw");
	d.display();
	car e(d);
	e.setprice(333);
	e.display();
}