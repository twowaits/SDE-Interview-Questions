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
void inserttail(node*&head,int d){
	if(head==NULL){
		head=new node(d);
		return;
	}
	node *tail=head;
	while(tail->next!=nullptr){
		tail=tail->next;
	}
	node *x=new node(d);
	tail->next=x;
}
int length(node*head){
	int cnt=0;
	while(head!=nullptr){
		head=head->next;
		cnt++;
	}
	return cnt;
}
void insertatmiddle(node *&head,int d,int p){
	if(head==nullptr || p==0){
		insert(head,d);
	}
	else if(p>length(head)){
		inserttail(head,d);
	}
	else{
		int jump=0;
		node*temp=head;
		while(jump<p-1){
			temp=temp->next;
			jump++;
		}
		node *newn=new node(d);
		newn->next=temp->next;
		temp->next=newn;
	}
}
void deletefront(node*&head){
	if(head==nullptr){
		return;
	}
	node *temp=head->next;
	delete head;
	head=temp;
}
void deletetail(node*&head){
	if(head==nullptr)return;
	node* prev=nullptr;
	node* curr=head;
	while(curr->next!=nullptr){
		prev=curr;
		curr=curr->next;
	}
	
	prev->next=nullptr;
	delete curr;
}
bool search(node*head,int key){
	if(head==nullptr)return false;
	node*temp=head;
	while(temp!=nullptr){
		if(temp->data==key)return true;
	}
	return false;
}
bool recsearch(node*head,int key){
	if(head==nullptr)return false;
	if(head->data==key)return true;
	else return recsearch(head->next,key);
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
	insertatmiddle(head,7,3);
	inserttail(head,9);
	print(head);
	deletefront(head);
	print(head);
	deletetail(head);
	print(head);
	if(search(head,7))cout<<"found";
	else cout<<"not found";
	if(recsearch(head,4))cout<<"Found";
	else cout<<"No";
}