
#include<bits/stdc++.h>
using namespace std;
int main(){
 int arr[]={1,2,3,4,54,5};
 stack<int>s;
 for(int i=0;i<6;i++){
    s.push(arr[i]);
 }
 while(!s().size()){
    cout<<s().top()<<" ";
    s.pop();
 }
}
