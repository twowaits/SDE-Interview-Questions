#include<iostream>
using namespace std;



//acess specifiers - public and private 

//defining a new datatype
class Car{

private:
	float price;

public:

	int model_no;
	char name[20];

	//constructor
	Car(){
		cout<<"Inside Car constructor"<<endl;
	}

	//parameterised constructor
	Car(float p,int m,char *n){
		price = p;
		model_no = m;
		strcpy(name,n);
	}
	Car(const float p){
		price = p;
	}

	Car(const Car &x){
		cout<<"Copy constructor "<<" ";
		price = x.price;
		model_no = x.model_no;
		strcpy(name,x.name);

	}


	void print() const{
		cout<<"Name "<<name<<endl;
		cout<<"Model No "<<model_no<<endl;
		cout<<"Price "<<price<<endl;
	}

	float get_discounted_price(const float x) const{Initialisation List
		return price*(1.0-x);
	}
	float apply_discount(const float x){
		price = price*(1.0-x);
		return price;
	}
	void set_price(float p){
		float msp = 111;
		if(p>msp){
			price = p;
		}
		else{
			price = msp;
		}
	}
	float get_price() const{
		return price;
	}

	~Car(){
		cout<<"Inside Destructor of car "<<name<<endl;
	}
};

int main(){

	//create an object
	Car c; //make a call to the constructor function present inside the class
	Car d(222,333,"Audi");
	cout<<"Car D";
	d.print();

	Car e(d); //copy constructor
	//another way of calling copy constructor
	Car f = e; //copy constructor


	e.set_price(456);
	cout<<"Car E";
	e.print();


	
	c.model_no = 112;
	c.name[0] ='B';
	c.name[1] = 'M';
	c.name[2] = 'W';
	c.name[3] = '\0';

	//try to print 
	//cout<<c.name<<" Model no"<<c.model_no<<" Price "<<c.price<<endl;
	//due to some mistake
	c.set_price(-100);

	c.print();

	return 0;
}






















