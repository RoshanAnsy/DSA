#include<iostream>
using namespace std;
int topmost(int arr[],int n){
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]<arr[mid+1]){
        s=mid+1;

    }
    else{
        e=mid;
    }
      mid=s+(e-s)/2;
}
return arr[mid];
}
int main(){
    int n;
    cout<<"inter the value of n"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"max element index is "<<" "<<topmost(arr,n)<<endl;
    return 0;
}