#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
vector<bool>isprime(N,1);
int main()
{
    isprime[0]=isprime[1]=false;
    for(int i=2;i<N;i++)
    {
        if(isprime[i]==true){
            for(int j=2*i;j<N;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=50;i++){
        if(isprime[i]==1)
            cout<<i<<" ";
    }
}
