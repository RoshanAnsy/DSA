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

node*marge(node*left,node*right){
    if(left==NULL){
        return right;

    }
    
    if(right==NULL){
        return left;

    }

    node*ans=new node(-1);
    node*temp=ans;

    while(left!=NULL && right!=NULL){
        if(left->data < right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
        temp->next=left;
        temp=left;
        left=left->next;
    }
    while(right!=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }
    ans=ans->next;
    return ans;
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








node*margesort(node*head){
    if(head==NULL || head->next==NULL){
        return head;
    }
node*mid=findmid(head);
node*left=head;
node*right=mid->next;
mid->next=NULL;

left=margesort(left);
right=margesort(right);
node*result=marge(left,right);
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
    addtail(head,2);
    addtail(head,10);
    addtail(head,0);
display(head);

node*newhead=margesort(head);
display(newhead);



    return 0;
}