#include<iostream>
using namespace std;
#include<bits/stdc++.h>
template<typename T>
class graph
{
	map<T,list<T>> l;
public:
	
	void addedge(int x,int y){
		l[x].push_back(y);
		l[y].push_back(x);
	}
	void bfs(T src){
		queue<T> q;
		map<T,int> dist;
		
		for(auto node_pair:l){
			T node=node_pair.first;
			dist[node]=INT_MAX;
		}
		q.push(src);
		dist[src]=0;
		while(!q.empty()){
			T node=q.front();
			q.pop();
			// cout<<node<<" ";
			for(auto nbr:l[node]){
				if(dist[nbr]==INT_MAX){
					q.push(nbr);
					dist[nbr]=dist[node]+1;
				}
			}
		}
		for(auto node_pair:l){
			T node=node_pair.first;
			int d=dist[node];
			cout<<"node"<<node<<"at dist from src"<<d<<endl;
		}
	}
	
};
int main(){
	graph <int> g;
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(0,3);
	g.addedge(3,4);
	g.addedge(4,5);
	g.bfs(0);
	return 0;
}