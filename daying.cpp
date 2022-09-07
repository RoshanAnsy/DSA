#include "bits/stdc++.h"
using namespace std;
vector<int> nextsmall(vector<int> &arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i=n-1;i>=0;i--){
       int curr=arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;
}


int largestarea(vector<int> &hight){

int n=hight.size();
vector<int>next;
next=nextsmallerelement(hight,n);

vector<int>pre;
pre=presmallerelement(hight,n);
int area=INT_MIN;
for(int i=0;i<n;i++){
    int l=hight[i];
    if(next[i]==-1){
        next[i]=n;
    }
    int b=next[i]-pre[i]-1;
    int newarea=l*b;
    area=max(newarea,area);
}

return area;






}






int main(){
    vector<int> arr={2,1,4,3};
    vector<int>find=nextsmall(arr,4);
    for(int i=0;i<4;i++){
        cout<<find[i]<<" ";
    }

    return 0;

}