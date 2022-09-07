#include "bits/stdc++.h"
using namespace std;
class que{
stack<int>st1;
stack<int>st2;
public:
void push(int val){
    st1.push(val);
}
int PO(){
    if(st1.empty() && st2.empty()){
        return -1;
    }
    if(st2.empty()){
        while(!st1.empty()){
            st2.push(st1.top());
            st1.pop();
        }
    }
    int topval=st2.top();
    st2.pop();
    return topval;
}

bool empty(){
     if(st1.empty() && st2.empty()){
        return true;;
    }
    return false;
}
};
int main(){
    que q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
   cout<< q1.PO();
    return 0;
}

