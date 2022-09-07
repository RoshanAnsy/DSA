#include<iostream>
using namespace std;
void solve(int arr[],int s,int e){
    int privat=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<privat){
count++;
        }
    }
    int m=s+count;

    swap(arr[m],arr[s]);
    int i=s;
    int j=e;
    while(i<m && j>m){
        while(arr[i]<privat){
            i++;
        }
        while(arr[j]>privat){
            j--;
        }
        if(i<m && j>m){
            swap(arr[i++],arr[j--]);
        }
    }
    //return m;
}
void margeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    
    int p=solve(arr,s,e);
     margeSort(arr,s,p-1);
      margeSort(arr,p+1,e);
}
int main(){
    int arr[5]={3,5,1,9,10};
    int n=5;
    margeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<solve(arr,0,n-1);
    return 0;
}