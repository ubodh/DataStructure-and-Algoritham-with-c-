#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node*left,*right;
node(int data){
data=data;
left=NULL;
    right=NULL;
}
};
struct node*CreateRoot(int data){
    struct node*temp=new node(data);
    //temp->data=data;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
void print(struct node*head){
if(head!=NULL) return ;
cout<<head->data<<" ";
print(head);
}
int main()
{
    struct node*root=new node(1);
    root->left=new node(2);
    root->right=new node(4);
    root->left->left=new node(5);
    root->left->right=new node(6);
    print(root);
}
