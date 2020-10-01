#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class graph{
	int v;
	list<pair<int,int>> *l;
public:
	graph(int v){
		this->v=v;
		l=new list<pair<int,int>>[v];
	}
	void addedge(int u,int v,int cost){
		l[u].push_back(make_pair(v,cost));
		l[v].push_back(make_pair(u,cost));
	}
	int dfshelper(int node,bool *visited,int *count,int&ans){
		visited[node]=true;
		count[node]=1;
		for(auto pairs:l[node]){
			int nbr=pairs.first;
			int cost=pairs.second;
			if(!visited[nbr]){
				count[node]+=dfshelper(nbr,visited,count,ans);
				int nx=count[nbr];
				int ny=v-nx;
				ans+=2*min(nx,ny)*cost;
			}
		}
		return count[node];
	}
	int dfs(){
		bool *visited=new bool[v]{false};
		int *count=new int[v]{0};
		int ans=0;
		dfshelper(0,visited,count,ans);
		return ans;
	}
};
int main(){
	graph g(4);
	g.addedge(0,1,3);
	g.addedge(1,2,2);
	g.addedge(2,3,2);
	cout<<g.dfs()<<endl;

}