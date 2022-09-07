#include "bits/stdc++.h"
using namespace std;
struct node{
    public:
    int data;
    node*left;
    node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    
};

void bildtree(node*root){
    if(root==NULL){
        return;
    }
    bildtree(root->left);
    cout<<root->data<<" ";
    bildtree(root->right);

}

void levelorder(node*root){
    queue<node*> q;
    q.push(root);
q.push(NULL);



   while(!q.empty()){
node*temp=q.front();

q.pop();

if(temp==NULL){
    cout<<endl;

    if(!q.empty()){
        q.push(NULL);
    }
}
else{
    cout<<temp->data<<" ";
    if(temp->left){
    q.push(temp->left);

}
   if(temp->right){
    q.push(temp->right);
    
}
}
   }
}

int main(){
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    bildtree(root);
cout<<endl;
    levelorder(root);
    return 0;
}