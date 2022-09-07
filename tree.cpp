#include<iostream>
#include<queue>
using namespace std;

class node{
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

// node* buildTree(node*root){
//     cout<<"inter the data for root node"<<endl;
//     int data;
//     cin>>data;
//     root=new node(data);
//     if(data==-1){
//         return NULL;
//     }
// root->left=buildTree(root->left);
// root->right=buildTree(root->right);

// return root;
// }


// void levelorder(node*root){
//     queue<node*>q;
//     q.push(root);
//     q.push(NULL);



//     while(!q.empty()){
//         node*temp=q.front();
//         q.pop();
//         if(temp==NULL){
//             cout<<endl;
//             if(!q.empty()){
//                 q.push(NULL);
//             }
//         }
//         else{
//             cout<<temp->data<<" ";
//             if(temp->left){
//                 q.push(temp->left);
//             }
//             if(temp->right){
//                 q.push(temp->right);
//             }
//         }
//     }
// }

// void print(node*root){
//     if(root==NULL){
//         return;
//     }
//     print(root->left);
//     cout<<root->data<<" ";
//     print(root->right);
// }


node* buildTree(node*root){
    int data;
   // cout<<"inter the data for root node"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"inter data for left node"<< " " <<data<<endl;
    root->left=buildTree(root->left);
    cout<<"inter data for right node"<<" "<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void inorder(node*root){
    if(root==NULL){
        return ;

    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// void  level_order(node*root){
//     queue<node*>q;
//     q.push(root);
//     while(!q.empty()){
//         node*temp=q.front();
//         q.pop();
//         cout<<root->data<<" ";
//         if(temp->left){
//             q.push(temp->left);
//         }
//         if(temp->right){
//             q.push(temp->right);
//         }
//     }

// }



int main(){

    node*root=buildTree(root);
   
    buildTree(root);
  
inorder(root);
//level_order(root);
    return 0;
}
// 1 2 3 4 -1 -1 -1 -1 -1 