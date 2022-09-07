#include <iostream>
using namespace std;
struct node{
int data;
node*right;
node*left;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};
int search(int inorder[],int st,int end,int val){
    for(int i=st;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}
node*buildTree(int postorder[],int inorder[],int st, int end){
    if(st>end){
        return NULL;
    }
    static int idx=4;
    int val=postorder[idx];
    idx--;
    node* curr=new node(val);
if(st==end){
    return curr;
}
    int pos=search(inorder,st,end,val);
    curr->right=buildTree(postorder,inorder,pos+1,end);
    curr->left=buildTree(postorder,inorder,st,pos-1);
    return curr;
}

void inorderprint(node*root){
    if(root==NULL){
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);

}



int main()
{
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};

struct node*root=buildTree(postorder,inorder,0,4);
inorderprint(root);

} // namespace name
