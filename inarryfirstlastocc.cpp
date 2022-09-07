#include<iostream>
using namespace std;
int first(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]=k){
             ans=mid;
            e=mid-1;
        }
        if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int last(int arr[],int n,int k){
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]=k){
             ans=mid;
            s=mid+1;
        }
        if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    int n;
    cout<<"inter the value of n"<<endl;
    cin>>n;
    int k;
    cout<<"inter the value of k"<<endl;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<first(arr,n,k)<<" "<<last(arr,n,k)<<endl;
return 0;
}


