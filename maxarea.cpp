#include "bits/stdc++.h"
using namespace std;
int binarysearch(int *arr,int s,int e,int k){
    int mid=(s+e)/2;
   if(s>=e){
       return -1;
   }
if(arr[mid]==k)
{
    return mid;
}
if(arr[mid]>k){
 binarysearch(arr,s,mid-1,k);
}
else{
  binarysearch(arr,mid+1,e,k);
}

}
int main(){
    int arr[]={2,5,6,0,1};
  cout<<   binarysearch(arr,0,5,5);

    return 0;
}
