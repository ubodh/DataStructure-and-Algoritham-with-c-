#include<bits/stdc++.h>
using namespace std;
class node{
public:
int data;
node*next;
};
void print(node*head){
while(head!=NULL){
    cout<<head->data<<" ";
    head=head->next;
}
}
int main()
{
    node*head=NULL;
        node*second=NULL;
            node*third=NULL;
            head->data==1;
            head->next=second;
            second->data=2;
            second->next=third;
            third->data=4;
            third->next=NULL;
    print(head);

}
