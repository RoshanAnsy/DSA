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
node*findmid(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
void display(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<" NULL"<<endl;
}
int main(){
    node*head=NULL;
    addtail(head,1);
    addtail(head,2);
    addtail(head,4);
    addtail(head,5);
    addtail(head,6);
    display(head);

    node*newhead=findmid(head);
    display(newhead);

    return 0;
}