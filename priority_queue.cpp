#include<bits/stdc++.h>
using namespace std;
void solve(priority_queue<int>pq){
while(!pq.empty())
 {
     cout<<pq.top()<<" ";
     pq.pop();
 }
}
void solve(priority_queue<int,vector<int>,greater<int>>pq){
while(!pq.empty())
 {
     cout<<pq.top()<<" ";
     pq.pop();
 }
}
 int main(){
 priority_queue<int>pq;//max heap
 priority_queue<int,vector<int>,greater<int>>meanHeap;
 int n;
 cin>>n;
 for(int i=0;i<n;i++){
        int x;
 cin>>x;
    pq.push(x);
    meanHeap.push(x);
 }
 solve(pq);
 cout<<endl;
 solve(meanHeap);
 }
