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
node* mid(node*head){
	if(head==nullptr or head->next==nullptr){
		return head;
	}
	node*fast=head->next;
	node*slow=head;
	while(fast!=nullptr && fast->next!=nullptr){
		fast=fast->next->next;
		slow=slow->next;
	}
	return slow;
}
node* merge(node*head,node*head1){
	if(head==nullptr)return head1;
	if(head1==nullptr)return head;
	node*c;
	if(head->data < head1->data){
		c=head;
		c->next=merge(head->next,head1);
	}
	else{
		c=head1;
		c->next=merge(head,head1->next);
	}
	return c;
}
node * mergesort(node* head){
	if(head==nullptr || head->next==nullptr)return head;
	node * midi=mid(head);
	node * a=head;
	node * b=midi->next;
	midi->next=nullptr;
	a=mergesort(a);
	b=mergesort(b);
	node * c=merge(a,b);
	return c;
}
int main(){
	node *head;
	// node*head1;
	//print(head);
	cin>>head;
	//cout<<head<<head1;
	//node* news=merge(head,head1);
	node *res=mergesort(head);
	cout<<res;
}