#include "bits/stdc++.h"
using namespace std;
class heap{
public:
int arr[100];
int size;
heap(){
    arr[0]=-1;
    size=0;
}
void insert(int val){
    size=size+1;
    int index=size;

    arr[index]=val;


    while(index>1){
        int parent=index/2;
       if(arr[index]>arr[parent]){
           swap(arr[index],arr[parent]);
           index=parent;
       }
       else{
           return;
       }
       //index--;
    }
}


  void display(){
      for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
      }
  }
};
int main(){
heap h;
h.insert(44);
h.insert(55);
h.insert(20);
h.insert(5);
h.insert(2);
h.insert(10);
h.display();

    return 0;
}