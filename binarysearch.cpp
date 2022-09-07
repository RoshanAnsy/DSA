#include<iostream>
using namespace std;
int binary(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(k<arr[mid]){
s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int n;
    cout<<"inter the valu of n"<<endl;
    cin>>n;
    int k;
    cout<<"inter the value of k"<<endl;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  cout<<  binary(arr,n,k);
    return 0;
}