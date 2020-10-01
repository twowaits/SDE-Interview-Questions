#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
	string s="abcdghjacfklighcdaty";
	int curr_length=1,max_length=1;
	int visited[256];
	for(int i=0;i<256;i++){
		visited[i]=-1;
	}
	visited[s[0]]=0;
	for(int i=1;i<s.length();i++){
		int prev_occ=visited[s[i]];
		if(prev_occ==-1 || i-curr_length>prev_occ){
			curr_length+=1;
			max_length=max(curr_length,max_length);
		}
		else{
			max_length=max(curr_length,max_length);
			curr_length=i-prev_occ;
		}
		visited[s[i]]=i;
	}
	max_length=max(curr_length,max_length);
	cout<<max_length<<endl;
}