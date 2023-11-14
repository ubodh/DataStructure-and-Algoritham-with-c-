#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int val;
node*left,*right;
node(int data){
val=data;
left=right=NULL;
}
};
node*BST(node*root,int data){
if(root==NULL)
return new node(data);

if(data>(root->val))
    root->left=BST(root->left,data);
else
    root->right=BST(root->right,data);
return root;
}
void inordered(node*root){
    if(root==NULL)
        return ;
inordered(root->left);
cout<<root->val<<" ";
inordered(root->right);
}
void preordered(node*root){
if(root==NULL)
    return ;
cout<<root->val<<" ";
preordered(root->left);
preordered(root->right);
}
int main(){
node*root=NULL;
root=BST(root,5);
BST(root,1);
BST(root,3);
BST(root,4);
BST(root,2);
BST(root,7);
inordered(root);
cout<<endl;
preordered(root);
}
