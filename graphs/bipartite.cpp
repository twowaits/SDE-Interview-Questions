#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> l[100];
bool iscycle;
int visited[100];
void dfs(int curr,int parent,int color){
	visited[curr]=color;
	for(auto child:l[curr]){
		if(visited[child]==0){
			dfs(child,curr,3-color);
		}
		else if(parent!=curr && color!=visited[child]){
			iscycle=true;
		}
	}
	return;
}
int main(){
	int vertices,edges;
	cin>>vertices>>edges;
	for(int i=0;i<edges;i++){
		int x,y;
		cin>>x>>y;
		l[x].push_back(y);
		l[y].push_back(x);
	}
	dfs(1,0,1);
	if(iscycle==true){
		cout<<"it isn't bipartite"<<endl;
	}
	else{
		cout<<"not bipartite"<<endl;
	}
}