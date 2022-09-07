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

node*deletealter(node*head){
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow->next=fast->next;
        node*temp=fast;

        fast=fast->next->next;
        slow=slow->next;
        delete temp;
    }
    return head;
}



node* atvalue(node*&head,int k){
    node*prev=NULL;
    node*curr=head;
    if(head->data==k){
head=head->next;
node*temp=head;
delete temp;
return head;
    }





    while(curr->next!=NULL){
        if(curr->data==k){
            prev->next=curr->next;
            node*temp=curr;
          
            curr=curr->next;
              delete temp;
        }
        else{
 prev=curr;
        curr=curr->next;
        }
       
    }
    return head;
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
    addtail(head,2);
    addtail(head,3);
    addtail(head,4);
    addtail(head,5);
    addtail(head,6);
    addtail(head,7);
    display(head);


    node*newhead=deletealter(head);
    display(newhead);
cout<<endl;




node*nwhead=atvalue(head,4);
display(nwhead);










    return 0;
}