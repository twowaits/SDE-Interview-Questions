#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node{
public:
	int data;
	node *next;
	node(int d){
		this->data=d;
		next=NULL;
	}
};
void insert(node*&head,int data){
	if(head==nullptr){
		head=new node(data);
		return;
	}
	node *x=new node(data);
	x->next=head;
	head=x;
}
void print(node *head){
	while(head!=nullptr){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}
node* take_input(){
	int d;
	cin>>d;
	node*head=NULL;
	while(d!=-1){
		insert(head,d);
		cin>>d;
	}
	return head;
}
ostream &operator<<(ostream &os,node*head){
	print(head);
	return os;
}
istream &operator>>(istream &is,node*&head){
	head=take_input();
	return is;
}
int main(){
	node *head;
	//print(head);
	cin>>head;
	cout<<head;
}