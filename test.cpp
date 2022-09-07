#include<iostream>
#include<vector>
#include<queue>
using namespace std;

vector<int> find(int arr[],int n){
    vector<int>ans;
queue<int>q;
for(int i=0;i<n;i++){
    q.push(arr[i]);
}

int temp1=q.front();
while(!q.empty()){
    q.pop();
    int temp2=q.front();
    if(temp1<temp2){
    ans.push_back(temp2);
    temp1=temp2;
    }


}


}


int main(){

  int arr[]={6,5,8,9,3};


    return 0;
}