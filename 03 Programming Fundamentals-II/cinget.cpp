#include<iostream>
using namespace std;



int main() {

	// Problem - Read a list of characters (sentence)
	// cin.get()

	char ch;
	//cin>>ch;
	//reads the first char
	ch = cin.get(); //this method reads any single char including spaces/newlines from the input buffer

	while (ch != '.') {
		//Print the last character that we have read
		cout << ch;
		// Update my char in the memory (read the next character)
		//reads the rest of the characters
		ch = cin.get();
	}


	return 0;
}