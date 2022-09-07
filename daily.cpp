#include "bits/stdc++.h"
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
void addatTail(node*&head,int val){
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
void addathead(node*&head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL";
}

void reverse(node*head){
    stack<int> st;
    node*temp=head;
    while(temp!=NULL){
        int val=temp->data;
        st.push(val);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}


void usque(node*head){
    node*temp=head;
    queue<int>q;
    while(temp!=NULL){
        int val=temp->data;
        q.push(val);
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}











int main(){
    node*head=NULL;
    addathead(head,1); 
    addathead(head,2);
    addathead(head,4);
    addathead(head,6);
addatTail(head,2);
addatTail(head,20);
addatTail(head,22);
addatTail(head,24);

//display(head);




reverse(head);


    return 0;
}