/*
Code to Print the Pattern N = 5
              1 
             232
            34543
           4567654
          567898765

*/

 #include<iostream>
 using namespace std;


 int main(){

 	int n;
 	cin>>n;
 	//Loop for rows 1 to n
 	for(int i=1;i<=n;i++){

 		//Spaces 
 		for(int space=1;space<=n-i;space++){
 			cout<<" ";
 		}

 		//Increasing Number
 		int val = i;
 		for(int cnt=1;cnt<=i;cnt++){
 			cout<<val;
 			val = val + 1;
 		}

 		//Decreasing Numbers
 		val = val - 2;
 		for(int cnt=1;cnt<=i-1;cnt++){
 			cout<<val;
 			val = val - 1;
 		}
 		//Print a new Line
 		cout<<endl;

 	}

 	return 0;
 }
