#include "bits/stdc++.h"
using namespace std;
void addbootom(stack<int>st, int k){
    if(st.empty()){
        st.push(k);
        return;
    }
    int m=st.top();
    st.pop();
    addbootom(st,k);
    st.push(m);
}
int main(){
stack<int>st;
int arr[]={1,0,9,3,9,5};
for(int i=0;i<6;i++){
    st.push(arr[i]);
}
addbootom(st,900);
for(int i=0;i<8;i++){
    cout<<st.top()<<" ";
    st.pop();
}

    return 0;
}