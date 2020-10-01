#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template <typename T>
class graph{
	map<T,list<T>> l;
public:
	void addedge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void dfs_helper(T src,map<T,bool>&visited){
		cout<<src<<" ";
		visited[src]=true;
		for(auto nbr:l[src]){
			if(!visited[nbr]){
				dfs_helper(nbr,visited);
			}
		}
	}
	void dfs(){
		map<T,bool> visited;
		for(auto x:l){
			T node=x.first;
			visited[node]=false;
		}
		int cnt=1;
		for(auto x:l){
			T node=x.first;
			if(!visited[node]){
				cout<<"Component "<<cnt<<"-> ";
				cnt++;
				dfs_helper(node,visited);
				cout<<endl;
			}
		}
		
	}
};
int main(){
	graph<int> g;
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(0,3);
	g.addedge(0,4);
	g.addedge(5,6);
	g.addedge(6,7);
	g.addedge(8,8);
	g.dfs();
	return 0;
}