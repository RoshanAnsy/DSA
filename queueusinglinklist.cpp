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

class queue{
node*front;
node*back;
public:
queue(){
    front=NULL;
    back=NULL;
}
void push(int val){
    node*n=new node(val);
    if(front==NULL){
        front=n;
        back=n;
        return;
    }
    back->next=n;
    back=n;
}
void pop(){
    if(back==NULL || front>back){
        cout<<"no element in queue fro pop"<<endl;
        return;
    }
    node*todelete=front;
    front=front->next;
    delete todelete;
}

int top(){
     if(back==NULL || front>back){
        cout<<"no element in queue fro pop"<<endl;
        return -1;
    }
   return front->data;
}

bool empty(){
      if(back==NULL || front>back){
      
        return true;
    }
    return false;
}
};







int main(){

queue q1;
q1.push(1);
q1.push(2);
q1.push(3);
cout<<q1.top()<<endl;
q1.pop();
cout<<q1.top();

    return 0;
}