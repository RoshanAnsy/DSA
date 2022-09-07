#include "bits/stdc++.h"
using namespace std;
struct Node{
int data;
Node*left;
Node*right;
Node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}





Node*BuildTree(int preorder[],int inorder[],int start,int end){
static int idx=0;
if(start>end){
    return NULL;
}
int curr=preorder[idx];
idx++;
Node*node=new Node(curr);
if(start==end){
    return node;
}
int pos=search(inorder,start,end,curr);
node->left=BuildTree(preorder,inorder,start,pos-1);
node->right=BuildTree(preorder,inorder,pos+1,end);
}

void ino(Node*root){
    if(root==NULL){
        return;
    }
    ino(root->left);
    cout<<root->data<<" ";
    ino(root->left);
}

int main(){

    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

Node*root=BuildTree(preorder,inorder,0,4);
ino(root);

    return 0;
}


