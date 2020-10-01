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
bool detect(node*head){
	
	node*slow=head;
	node*fast=head;
	while(slow!=nullptr && (fast!=nullptr and fast->next!=nullptr)){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)
			return true;
	}
	return false;
}
int detectAndRemoveLoop(node*head) 
{ 
    node *slow_p = head, *fast_p = head; 
  
    while (slow_p && fast_p && fast_p->next) { 
        slow_p = slow_p->next; 
        fast_p = fast_p->next->next; 
  
        /* If slow_p and fast_p meet at some point then there 
           is a loop */
        if (slow_p == fast_p) { 
            // removeLoop(slow_p, list); 
  
            /* Return 1 to indicate that loop is found */
            return 1; 
        } 
    } 
  
    /* Return 0 to indeciate that ther is no loop*/
    return 0; 
} 
void removeLoop(node*head){
	
	node*slow=head;
	node*fast=head;
	while(slow!=nullptr && (fast!=nullptr and  fast->next!=nullptr)){
		fast=fast->next->next;
		slow=slow->next;
		if(fast==slow)break;
	}
	node* ptr1=head;
	node* ptr2=fast;
	while(1){
		while (ptr2->next != fast && ptr2->next != ptr1) 
            ptr2 = ptr2->next; 
  
        /* If ptr2 reahced ptr1 then there is a loop. So break the 
        loop */
        if (ptr2->next == ptr1) 
            break; 
  
        /* If ptr2 did't reach ptr1 then try the next node after ptr1 */
        ptr1 = ptr1->next; 
	}
	//remove prev link like prev->next=null
	ptr2->next=nullptr;
}

int main(){
	node *head;
	//print(head);
	cin>>head;
	bool res=detect(head);
	if(res){cout<<"cycle exists"<<endl;remove(head);}
	else cout<<"no"<<endl;
	remove(head);
	cout<<head;
	cout<<detectAndRemoveLoop(head);
}