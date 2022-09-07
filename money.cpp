#include "bits/stdc++.h"
using namespace std;


class heap{
    public:
    int arr[100];
    int size;
    heap(){
        size=0;
        arr[0]=-1;
    }

 void insert(int val){
    size =size+1;
    int index=size;
 arr[index]=val;
  while(index>1){
    int parent=index/2;
    if(arr[parent]<arr[index]){
        swap(arr[parent],arr[index]);
    }
    else
    { 
        return;
    }
 }
 }
 void heapyfy(int arr[],int size,int i){
     int largest=i;
     int left=2*i;
     int right=2*i+1;
     if(left<=size && arr[i]<arr[left]){
         largest=left;
     }
     if(right<=size && arr[i]<arr[right]){
         largest=right;
     }
     if(largest!=i){
         swap(arr[largest],arr[i]);
         heapyfy(arr,size,largest);
     }
 }

void sorting(){
   while(size>1){
       swap(arr[size],arr[1]);
       heapyfy(arr,size,1);
   }
}



 void display(){
     
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
 }
};

int main(){
    heap p;
    p.insert(1);
    p.insert(2);
    p.insert(3);
    p.insert(4);
    p.insert(5);
    p.display();
    p.sorting();
    return 0;
}