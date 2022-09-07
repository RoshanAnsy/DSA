#include<iostream>
#define n 1000
using namespace std;
class queue{
    int*arr;
    int frant;
    int back;
    public:
    queue(){
        arr=new int[n];
        frant=-1;
        back=-1;
    }

void inequeue(int x){
    if(back==n-1){
cout<<"queue is over flow"<<endl;
return;
    }
    back++;
    arr[back]=x;
    if(frant==-1){
        frant++;
    }

}
void dequeue(){
    if(frant==-1 || frant>back){
        cout<<"no element in queue"<<endl;
        return;
    }
    frant++;
}
int peek(){
    if(frant==-1 || frant>back){
        cout<<"no element in queue for peek"<<endl;
        return -1;
    }
    return arr[frant];

}
bool empty(){
    if(frant==-1 || frant>back){
        return true;
    }
    return false;
}
};
int main(){
    queue q;
    int a[9]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<9;i++){
        q.inequeue(a[i]);
    }
    for(int i=0;i<9;i++){
   cout<< q.peek()<<" ";
   q.dequeue();
    }
    return 0;
}