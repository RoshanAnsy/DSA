#include<iostream>
using namespace std;
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[minindex]>arr[j]){
           minindex=j;
        }
        
    }
     swap(arr[minindex],arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,4,7,1,0};
    int n=5;
    selection(arr,n);
    return 0;
}