#include<bits/stdc++.h>/*
Pascale triangle
1                      n=0
1 1                   n=1
1 2 1                n=2
1 3 3 1             n=3
1 4 6 4 1          n=4
1 5 10 10 5 1   n=5
*/
using namespace std;
int factorial(int n){
if(n==0) return 1;
return n*factorial(n-1);
}
int combination(int n,int r){
return  factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
    int N;
    cin>>N;
    for(int i=0;i<=N;i++){
      for(int j=0;j<(i+1);j++){
      cout<<(combination(i,j))<<"  ";
      }
      cout<<endl;
    }
}
