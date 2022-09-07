#include<iostream>
using namespace std;
void marge(int *arr,int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];
        int k=s;
    for(int i=s;i<len1;i++){
first[i]=arr[k++];
    }
    k=mid+1;
    for(int j=0;j<len2;j++){
        second[j]=arr[k++];
    }

int index1=0;
int index2=0;
 k=s;
while(index1<len1 && index2<len2){
    if(first[index1]<second[index2]){
        arr[k++]=first[index1++];
    }
    else{
        arr[k++]=second[index2++];
    }
}
while(index1<len1){
     arr[k++]=first[index1++];
}
while(index2<len2){
     arr[k++]=first[index1++];
}


}
void margesort(int *arr,int s,int e){

if(s>=e){
    return;
}

    int mid=s+(e-s)/2;
    margesort(arr,s,mid);
    margesort(arr,mid+1,e);
    marge(arr,s,e);
}
int main(){
    int arr[]={2,3,5,0};
   int n=4;
    margesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}