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
node* getnode(node*head,int d){
	//if(head==nullptr)return nullptr;
	node*temp=head;
	while(temp->next!=head){
		if(temp->data==d){
			return temp;
		}
		temp=temp->next;
	}
	if(temp->data==d)return temp;
	return nullptr;
}
void deleten(node*&head,int data){
	node*del=getnode(head,data);
	if(del==nullptr)return;
	if(head==del)head=head->next;
	node*temp=head;
	while(temp->next!=del){
		temp=temp->next;
	}
	temp->next=del->next;
	delete del;
}
int main(){
	node * head=nullptr;
	insert(head,1);
	insert(head,2);
	insert(head,3);
	insert(head,4);
	insert(head,5);
	insert(head,6);
	deleten(head,4);
	print(head);
}