#include<iostream>
using namespace std;
struct node{
    int data;
    node*left;
    node*right;
    node(int val){
data=val;
left=NULL;
right=NULL;
    }
};

void display(node*root){
    if(root==NULL){
        return;
    }
    display(root->left);
    cout<<root->data<<" ";
    display(root->right);
}


int main(){

struct node*root=new node(1);
root->left=new node(2);
root->right=new node(3);
root->left->left=new node(4);
root->left->right=new node(5);
display(root);
    return 0;
}