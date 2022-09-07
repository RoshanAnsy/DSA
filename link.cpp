#include "bits/stdc++.h"
using namespace std;



class node{
  
int data;
node*next;
  public:
node(int val){
    data=val;
    next=NULL;
}
friend void adattail(node*&head,int val);
friend node*dubicate(node*&head);
friend node*dubicateroot(node*head);
friend void print(node*head);
};



void adattail(node*&head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

node*dubicate(node*&head){
    node*curr=head;
    if(head==NULL){
        return NULL;
    }
    while(curr!=NULL){
        if((curr->next!=NULL) &&curr->data==curr->next->data){
            node*next_next=curr->next->next;
node*todelete=curr->next;
delete (todelete);
curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}


node*dubicateroot(node*head){
    node*curr=head;
    node*front=head;
    if(head==NULL){
        return NULL;
    }
    while(curr!=NULL){
        while(front!=NULL){
        if( curr->data==front->next->data){
            node*next_next=front->next->next;
            node*todeleteroot=front->next;
            delete (todeleteroot);
            front->next=next_next;
           
        }
        else{
            front=front->next;
        }

    }

       
            curr=curr->next;
            front=front->next;
        
    }
    return head;
}


void print(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){

node*head=NULL;
// adattail(head,4);
// adattail(head,2);
// adattail(head,3);
// adattail(head,3);
// adattail(head,3);
// adattail(head,4);
// adattail(head,5);
// adattail(head,6);
// adattail(head,2);
int a[]={4,2,3,3,4,5,6,2};
for(int i=0;i<8;i++){
    adattail(head,a[i]);
}
print(head);

node*newhead=dubicate(head);
//print(newhead);
node*newroot=dubicateroot(head);

print(newroot);
}