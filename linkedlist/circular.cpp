#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node{
public:
	int data;
	node*next;
	node(int d){
		this->data=d;
		next=nullptr;
	}
};
void insert(node*&head,int d){
	node*x=new node(d);
	node*temp=head;
	x->next=head;
	if(temp!=nullptr){
		while(temp->next!=head){
			temp=temp->next;
		}
		temp->next=x;
	}
	else{
		x->next=x;
	}
	head=x;

}
void print(node*head){
	node*temp=head;
	while(temp->next!=head){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<temp->data<<endl;
	return;
}
int main(){
	node * head=nullptr;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	print(head);
}