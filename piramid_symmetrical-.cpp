#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int  temp=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*n-1);j++){
            if(j>=((n+1)-i) &j<=((n-1)+i)){
                                 if(j==n)
                                 cout<<"#";
                                    else cout<<"*";

            }else{
            cout<<" ";
            }
        }
        cout<<"\n";
    }
}
