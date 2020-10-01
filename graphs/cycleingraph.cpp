#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class  graph
{
	int v;
	list <int> *l;
public:
	 graph(int v){
	 	this->v=v;
	 	l=new list<int>[v];
	 }
	
	void addedge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	bool cycle(int node,bool *visited,int parent){
		visited[node]=true;
		for(auto nbr:l[node]){
			if(!visited[nbr]){
				bool cyclemila=cycle(nbr,visited,node);
				if(cyclemila)return true;
			}
			else{
				if(parent!=node)return true;
			}
		}
		return false;
	}
	
};
int main()
{
	/* code */
	graph g(5);
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4);
	g.addedge(4,0);
	bool *visited=new bool[5];
	for(int i=0;i<5;i++)visited[i]=false;
	if(g.cycle(0,visited,-1)){
		cout<<"it's a cyclic graph"<<endl;
	}
	else{
		cout<<"saara mehnat waste uffff!"<<endl;
	}
	return 0;
}