#include<iostream>
using namespace std;
//read a sentence/paragraph and store it
//cin.get() reads a single character
//put a loop to read characters till you get a new line '\n'

void readline(char a[], int maxLen, char delim = '\n') {

	int i = 0;
	char ch = cin.get();
	while (ch != delim) {
		a[i] = ch;
		i++;
		if (i == (maxLen - 1)) {
			break;
		}
		ch = cin.get();
	}
	//once out of the loop
	a[i] = '\0';
	return;

}

int main() {

	char a[1000];
	//readline(a, 1000, '$');
	cin.getline(a, 1000, '$');
	cout << a << endl;

	return 0;
}

/*void readline(int arr[],int maxlen,char delim='\n')
{
	char ch=cin.get();
	int i=0;
	while(ch!=delim)
	{
		arr[i++]=ch;
		if(i==maxlen-1)break;
		ch=cin.get();
	}
	arr[i]='\0';
	return;
}*/