#include "bits/stdc++.h"
using namespace std;


bool isvalid(string str){
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            if(!s.empty()){
                char top=s.top();
                if(   ( ch==')' && top=='(' ) ||  ( ch=='}' && top=='{' )  || ( ch==']' && top=='[' ) ){
                    s.pop();
                }
                 else{

                return false;
                
            }
            }
            else{
                return false;

            }
           
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

void insert(stack<int>&st,int num){
    if(st.empty() || (!st.empty() && st.top()<num)){
        st.push(num);
        return;
    }
    int n=st.top();
    st.pop();
    insert(st,num);
    st.push(n);
}



void Sort(stack<int>&st){
    if(st.empty()){
        return;
    }
int num=st.top();
st.pop();
Sort(st);
insert(st,num);

}


void insertatbottom(stack<int>&st,int k){
    if(st.empty()){
        st.push(k);
        return;
    }
    int num=st.top();
    st.pop();
    insertatbottom(st,k);
    st.push(num);
}


int main(){
    string str="[{()}]";
    //int arr[]={2,-4,0,3,10};
   stack <char> st;
  for(int i=0;i<str.length();i++){
      st.push(str[i]);
  }


insertatbottom(st,200);
for(int i=0;i<6;i++){
   cout<< st.top()<<" ";
   st.pop();
}
cout<<isvalid(str);






// Sort(st);

// for(int i=0;i<6;i++){
//     cout<<st.top()<<" ";
//     st.pop();
// }


//cout<<isvalid(str);




    return 0;
}