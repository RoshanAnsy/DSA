#include<iostream>
using namespace std;

class node{
   public:
   int coffe;
   int power;
   node*next;
   node(int v1,int v2){
      coffe=v1;
      power=v2;
      next=NULL;
   }
};

void first(node*&head1,int v1,int v2){
   node*n=new node(v1,v2);
   node*temp=head1;
   if(head1==NULL){
      head1=n;
      return;
   }
   while(temp->next!=NULL){
      temp=temp->next;

   }
temp->next=n;
}

void second(node*&head2,int v3,int v4){
   node*n=new node(v3,v4);
   if(head2==NULL){
      head2=n;
      return;
   }

   node*temp=head2;
   while(temp->next!=NULL){
      temp=temp->next;

   }
   temp->next=n;
}

node*marge(node*head1,node*head2){
   node*ans;
   node*curr;
  
   if(head1==NULL){
      ans=head2;

   }
   if(head2==NULL){
      ans=head1;
   }

node*temp1=head1;
node*temp2=head2;
while(temp1!=NULL && temp2!=NULL){
   if(temp1->power > temp2->power){
      ans=temp1;
      temp1=temp1->next;
      ans=ans->next;
   }
   else if(temp1->power <temp2->power){
      ans=temp2;
      temp2=temp2->next;
      ans=ans->next;
   }
   else{
   temp1->coffe=temp1->coffe +temp2->coffe;
   ans=temp1;
   temp1=temp1->next;
   temp2=temp2->next;
   ans=ans->next;
   }
}
head1=ans;
return ans;

}

void display(node*head1){
node*temp=head1;
while(temp!=NULL){
   cout<<temp->coffe<<" ";
   temp=temp->next;
}
}



int main(){
   node*head1=NULL;
   node*head2=NULL;
   first(head1,4,2);
   first(head1,6,1);
   second(head2,4,2);
   second(head2,6,1);
   marge(head1,head2);
   display(head1);

   return 0;
}