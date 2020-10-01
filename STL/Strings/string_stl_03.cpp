#include <iostream>
#include <cstring>
using namespace std;

//char *strtok(char *s,char *delimiters)
// returns a token on each subsequent call
// on the first call function should be passed with string argument for 's'
// on subsequent calls we should pass the string argument as null

int main() {
    
    char s[100] = "Today, is a rainy, day";  

    char *ptr = strtok(s," ");
    cout<<ptr<<endl;

    while(ptr!=NULL){
        ptr = strtok(NULL," ");
        cout<<ptr<<endl;
    }
    return 0;
}
