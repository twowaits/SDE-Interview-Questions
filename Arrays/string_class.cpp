#include<iostream>
#include<cstring>
using namespace std;



int main() {

	string s;

	getline(cin, s);

	cout << s;

	//Lets one function that is available
	cout << s.length() << endl;

	s.pop_back();
	s.push_back('i');

	for (int i = 0; i < s.length(); i++) {
		cout << s[i] << ",";
	}

	string s1 = "hello";
	string s2 = "world";
	cout << s1 + s2 << endl;





	return 0;
}