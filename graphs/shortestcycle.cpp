#include<iostream>
using namespace std;
#include<bits/stdc++.h>
vector<int> graph[100];
void bfs(int src,int n,int &ans){
	vector<int> dist(n+1,INT_MAX);
	queue<int> q;
	q.push(src);
	dist[src]=0;
	while(!q.empty()){
		int curr=q.front();
		q.pop();
		for(auto nbr:graph[curr]){
			if(dist[nbr]==INT_MAX){
				//not visited
				dist[nbr]=dist[curr]+1;
				q.push(nbr);
			}
			else if(dist[nbr]>dist[curr]){
				//back edge encountered
				ans=min(ans,dist[nbr]+dist[curr]+1);
			}
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	int ans=n+1;
	for(int i=1;i<=n;i++){
		bfs(i,n,ans);
	}
	if(ans==n+1){
		cout<<"graph has no cycles "<<endl;
	}
	else{
		cout<<"smallest cycle length is: "<<ans<<endl;
	}
}