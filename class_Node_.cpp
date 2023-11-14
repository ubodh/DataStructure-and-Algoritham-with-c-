#include<bits/stdc++.h>
using namespace std;
class node{
    public:
int data;
node*next;

};
node*build(int sizee)
{
   int x;
   cin>>x;
    node*head=new node();
   head->data=x;
   node*tail=head;
    for(int i=0;i<sizee-1;i++)
    { int val;
        cin>>val;
        tail->next=new node();
        tail->data=val;
        tail=tail->next;
    }
    return head;
}
void print(node*head)
{
    while(head)
    {
        cout<<head->data<<" ";
        print(head->next);
    }
}
using namespace std;
int main()
{
    int n;
    cin>>n;
    node*t=build(n);
    print(t);
}
