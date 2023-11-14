#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={2,3,4,5,11,7};
  //  stack<int>s;
  vector<int>v;
    int i=0;
    int n=6;
               while(n>j){
           int mini=arr[j];
               for(int i=1+j;i<n;i++){
                 mini=min(mini,arr[i]);
                 //s.push(mini);
                 v.push_back(mini);
                        }
                      //  n--;
                        j++;
    }
for(int K:v)
    cout<<K<<" ";
}
