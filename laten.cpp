#include "bits/stdc++.h"
using namespace std;
void insertatbottom(stack<int>&st,int ele){
    if(!st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertatbottom(st,ele);
}
void reverse(stack<int>&st){
    if(!st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertatbottom(st,ele);
}


int main(){
    stack<int>st;
    int arr[]={1,4,6,4,8,0};
    for(int i=0;i<6;i++){
        st.push(arr[i]);
    }

while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
cout<<endl;

    return 0;
}