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
		map<int,bool> visited;
		q.push(src);
		visited[src]=true;
		while(!q.empty()){
			T node=q.front();
			q.pop();
			cout<<node<<" ";
			for(auto nbr:l[node]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr]=true;
				}
			}
		}
	}
	
};
int main(){
	graph <int> g;
	g.addedge(0,1);
	g.addedge(1,2);
	g.addedge(2,3);
	g.addedge(3,4);
	g.addedge(4,5);
	g.bfs(0);
	return 0;
}