#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int n=(N+1)/2;
    int m=0;
    int i,j;
    for(i=1;i<=N;i++){
        i<=n?m++:m--;
        for(j=1;j<=N;j++){
            if(j>=n+1-m && j<=n-1+m){
                cout<<" *";
            }
              else
                 cout<<" ";
             }
        cout<<endl;
    }
}
