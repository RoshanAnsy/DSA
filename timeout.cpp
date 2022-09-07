#include<iostream>
using namespace std;

int  binary(int *arr,int s,int e,int k){
   
    
    if(s>e){
        return -1;
    }
int mid=s+(e-s)/2;
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        binary(arr,mid+1,e,k);
    }
    else{
        binary(arr,s,mid-1,k);
    }
   
  
}
int main(){

    
        int arr[]={1,2,3,4,5};
        int n=5;
       cout<< binary(arr,0,n-1,4);


    return 0;
}