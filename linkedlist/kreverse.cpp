#include<iostream>
using namespace std;
#include<bits/stdc++.h>
class node{
public:
	int data;
	node*next;
	node(int data){
		this->data=data;
		next=nullptr;
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
node *kreverse (node *head, int k)  
{  
    node* current = head;  
    node* next = NULL;  
    node* prev = NULL;  
    int count = 0;  
      
    /*reverse first k nodes of the linked list */
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  
      
    /* next is now a pointer to (k+1)th node  
    Recursively call for the list starting from current.  
    And make rest of the list as next of first node */
    if (next != NULL)  
    head->next = kreverse(next, k);  
  
    /* prev is new head of the input list */
    return prev;  
} 
node* recrev(node *head){
	if(head->next==nullptr or head==nullptr){
		return head;
	}
	node *rest=recrev(head->next);
	head->next->next=head;
	head->next=nullptr;
	
	return rest;
} 
void print(node *head){
	while(head!=nullptr){
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<endl;
}
int main(){
	node*head=nullptr;
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		insert(head,x);
	}
	head=kreverse(head,k);
	head=recrev(head);
	print(head);
}