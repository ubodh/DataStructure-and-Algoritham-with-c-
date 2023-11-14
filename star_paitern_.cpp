#include<bits/stdc++.h>
using  namespace std;
int main()
{
    int N;
    cin>>N;
    for(int i=0;i<(N+2);i++){
        cout<<"@"<<" ";
    }
    cout<<endl;
    int n=(N+1)/2;
    int m=0;
    for(int i=1;i<=N;i++){
        i<=n?m++:m--;
        for(int j=1;j<=N;j++){
            if(j>=n+1-m && j<=n-1+m)
                cout<<" *";
              else
                 cout<<"";
             }
        cout<<endl;
    }

}
