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



//marge sort implemention





node* marge(node*first,node*second){
    if(first==NULL){
        return second;
    }
    if(second==NULL){
        return first;
    }

node*ans=new node(-1);
node*temp=ans;

while(first!=NULL && second!=NULL){
    if(first->data <second->data){
        temp->next=first;
        temp=first;
        first=first->next;
    }
    else{
        temp->next=second;
        temp=second;
        second=second->next;
    }
}
while(first!=NULL){
     temp->next=first;
        temp=first;
        first=first->next;
}
while(second!=NULL){
     temp->next=second;
        temp=second;
        second=second->next;
}
ans=ans->next;
return ans;

}








node* findmid(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


node *margesort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* mid=findmid(head);
node*first=head;
node*second=mid->next;

mid->next=NULL;
   first= margesort(first);
   second=margesort(second);
    node*result=marge(first,second);
    return result;
}



void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}




int main(){

node*head=NULL;
addtail(head,1);
addtail(head,5);
addtail(head,2);
addtail(head,0);
addtail(head,10);
display(head);

node*newhead=margesort(head);
//margesort(head);
display(newhead);


    return 0;
}