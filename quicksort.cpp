#include<iostream>
using namespace std;
int partion(int arr[],int s,int e){
    int privot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<privot){
            count++;
        }
    }
    int privotindex=s+count;
    swap(arr[privotindex],arr[s]);
    int i=s;
    int j=e;

    while(i<privotindex && j>privotindex){
        while(arr[i]<privot){
            i++;
        }
          while(arr[j]>privot){
            j--;
        }
        if(i<privotindex && j>privotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return privotindex;
}




void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
   int p=partion(arr,s,e);
   quicksort(arr,s,p-1);
   quicksort(arr,p+1,e);
}





int main(){


    int arr[]={9,3,1,0,0,0};
    int n=6;
    quicksort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}