#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        left=NULL;
        right=NULL;
        data=val;

    }
};
void add(node*root,int val){
    node*n=new node(val);
    node*m=new node(val);
    root->data=val;
    if(val>root->data){
        root->left=val;
    }
    else{
        root->right=val;
    }
}
int main(){
    return 0;

}