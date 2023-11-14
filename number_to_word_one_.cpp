#include<bits/stdc++.h>
using namespace std;
int arr[]=new int[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int main(){
   int n;
   cin>>n;
   while(n){
    int r=n%10;
    cout<<arr[r]<<" ";
    n=n/10;
   }

}