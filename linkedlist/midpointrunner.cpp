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
// void reverse(node *&head){
// 	node*c=head;
// 	node*prev=nullptr;
// 	node*n;
// 	while(c!=nullptr){
// 		n=c->next;
// 		c->next=prev;
// 		prev=c;
// 		c=n;
// 	}
// 	head=prev;
// }
node* recrev(node *head){
	if(head->next==nullptr or head==nullptr){
		return head;
	}
	node *rest=recrev(head->next);
	head->next->next=head;
	head->next=nullptr;
	
	return rest;
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
int main(){
	node *head=nullptr;
	insert(head,0);
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	print(head);
	// head=recrev(head);
	node*midi=mid(head);
	cout<<midi->data<<endl;
	print(head);
}