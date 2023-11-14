#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int val;
node*left,*right;
node(int va){
val=va;
left=right=NULL;
}
};
node*createBST(node*root,int v){
    if(root==NULL)
        return new node(v);
if(v>(root->val))
    root->right=createBST(root->right,v);
else
    root->left=createBST(root->left,v);
return root;
}
void inordered(node*root){
if(root==NULL)
    return ;
inordered(root->left);
cout<<root->val<<" ";
inordered(root->right);
}
int main(){
 node*root=NULL;
 root=createBST(root,5);
 createBST(root,1);
 createBST(root,3);
 createBST(root,4);
 createBST(root,2);
 createBST(root,7);
 inordered(root);
}
