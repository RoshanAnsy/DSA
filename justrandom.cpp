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
void addattail(node*&head,int val){
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

node*deleteat(node*&head,int k){
    node*temp=head;
    node*pre=NULL;
  // int  count=1;
    while(temp!=NULL){
        if(temp->data==k){
            pre->next=temp->next;
        }
       // count++;
       pre=head;
       pre=pre->next;
        temp=temp->next;
    }
    return head;
}

// node*sortlink(node*&head){
// node*curr=head;
// node*temp=curr->next;
// while(curr!=NULL){
// if((temp!=NULL) && curr->data)
// }


// }
void display(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main(){


    node*head=NULL;
     addattail(head,1);
      addattail(head,3);
     addattail(head,6);
 addattail(head,2);
 display(head);


  node*newhead=deleteat(head,6);
 display(newhead);
    return 0;


}