#include<bits/stdc++.h>
using namespace std;
class  node{
public:
int data;
node*left,*right;
 node(int val){
 data=val;
 left=right=NULL;
 }
};
node*BST(node*root,int val){
if(root==NULL) return new node(val);
if(val<root->data)
    root->left=BST(root->left,val);
else
    root->right=BST(root->right,val);
return root;
}
void inorder(node*root){
if(root==NULL) return ;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
int  main(){
node*root=NULL;
root=BST(root,5);
BST(root,1);
BST(root,3);
BST(root,4);
BST(root,2);
BST(root,7);
inorder(root);
cout<<endl;
return 0;
}
