#include<iostream>
#define n 20
using namespace std;
class queue{
int*arr;
int front;
int back;
public:
queue(){
    arr =new int[n];
    front=-1;
    back=-1;
}

void push(int val){
    if(back==n-1){
        cout<<"queue has over flow"<<endl;
        return;
    }
    back++;
    arr[back]=val;
if(front==-1){
    front++;
}
}
void pop(){
    if( front>back){
        cout<<"queue has no data"<<endl;
    
    return;
    }
    front++;
}
int top(){
     if( front>back){
        cout<<"queue has no data"<<endl;
    
    return -1;
    }
return arr[front];
}
bool empty(){
     if( front>back){
       
    
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