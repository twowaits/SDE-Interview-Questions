#include<iostream>
#include<list>
#include<unordered_map>
#include<cstring>
using namespace std;
class graph{
	unordered_map <string,list<pair<string,int>>> l;
public:
	void addedge(string x,string y,bool bidr,int wt){
		l[x].push_back(make_pair(y,wt));
		if(bidr){
			l[y].push_back(make_pair(x,wt));
		}
	}
	void print(){
		for(auto x:l){
			string city=x.first;
			list<pair<string,int>> nbrs=x.second;
			cout<<city<<" -> ";
			for(auto x:nbrs){
				string dest=x.first;
				int wt=x.second;
				cout<<dest<<" "<<wt<<" , ";
			}
			cout<<endl;
		}
	}
};
int main(){
	graph g;
	g.addedge("Allahabd","Bangalore",true,20);
	g.addedge("Bangalore","Delhi",true,40);
	g.addedge("Allahabd","Chehnai",true,10);
	g.addedge("Chehnai","Delhi",true,40);
	g.addedge("Allahabd","Delhi",false,50);
	g.print();
}