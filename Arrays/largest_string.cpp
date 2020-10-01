#include<iostream>
#include<cstring>
using namespace std;
/*Question - Read N, followed by N strings and print the largest string
and its length
*/

int main() {


	int n;
	cin >> n;

	char a[1000];
	char largest[1000];

	int len = 0;
	int largest_len = 0;

	cin.get();

	for (int i = 0; i < n; i++) {
		cin.getline(a, 1000);
		//cout << a << endl;
		len = strlen(a);
		if (len > largest_len) {
			largest_len = len;
			strcpy(largest, a);
		}
	}

	cout << largest << " and " << largest_len << endl;


	return 0;
}

/*char a[1000];
char largest[1000];
int largest_len=0;
int n;
cin>>n;
cin.get();
for(int i=0;i<n;i++){
	cin.getline(a,1000);
	int len=strlen(a);
	if(len>largest_len){
	largest_len=len;
	strcpy(largest,a);
	}
}
cout<<largest<<largest_len<<endl;*/