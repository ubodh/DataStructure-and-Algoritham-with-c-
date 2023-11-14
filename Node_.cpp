#include<bits/stdc++.h>
using namespace std;
struct  node{
int data;
node*left;
node*right;
};
node*newNode(int data){
node*element=new node();
element->data=data;
element->left=NULL;
element->right=NULL;
return element;
}
void printNode(node*n){
while(n){
    cout<<n->data<<" ";
    n=n->right;
    cout<<n->data<<" ";
    n=n->left;
}
}
void levelOrderTraversal(node*root){
queue<node*>q;
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
    }else{
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
    node*root=newNode(3);
    root->left=newNode(32);
    root->right=newNode(34);
    root->left->left=newNode(31);
    root->left->left->left=newNode(13);
  //  printNode(root);
    levelOrderTraversal(root);
    printNode(root);
}
