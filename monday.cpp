#include<iostream>

using namespace std;

class node{
      public:
    int data;
    node*next;
  
    node(int val){
        data=val;
        next=NULL;
    }
};
void addhead(node*&head,int val){
    node*n=new node(val);
    node*temp=head;
    if(head==NULL){
        head=n;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

    void display(node*head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"NULL";
    }
int main(){

    node*head=NULL;
    addhead(head,1);
    addhead(head,3);
    addhead(head,4);
    addhead(head,5);
    addhead(head,6);
    display(head);

    return 0;
}