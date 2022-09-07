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
void addtail(node*&head,int val){
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

void deleteat(node*&head){
    node*temp=head;
    if(head==NULL){
        return;
    }
    while(temp->next!=NULL){
       temp=temp->next;
    }
     node*Next=temp->next;
    
        temp->next=temp->next->next;
    
        delete Next;
    
}



void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ->";
        temp=temp->next;

    }
    cout<<"NULL"<<endl;
}


int main(){
node*head=NULL;
addtail(head,1);
addtail(head,2);
addtail(head,3);

addtail(head,4);
display(head);
deleteat(head);
display(head);

    return 0;
}