#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<char> q;
	int freq[27]={0};
	char c;
	cin>>c;
	while(c!='.'){
		q.push(c);
		freq[c-'a']++;
		while(!q.empty()){
			if(freq[q.front()]>1){
				q.pop();
			}
			else{
				cout<<q.front()<<" ";
				break;
			}
		}
		if(q.empty()){
			cout<<-1<<" ";
		}
		cin>>c;
	}
}