#include<iostream>
using namespace std;
int find(int *arr,int n,int k){
    
    for(int i=0;i<n;i++){
if(arr[i]==k){
    k=k*2;
    
    
}

    }
   
return k;
}
int main(){
    int arr[]={16,1,2,4,7,8,16};
    cout<<find(arr,7,2);
    return 0;
}