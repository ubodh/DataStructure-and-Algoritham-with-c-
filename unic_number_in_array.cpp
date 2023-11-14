#include<bits/stdc++.h>
using namespace std;
int main(){
int a[]={1,2,3,1,2,4,3};
int n=*(&a+1)-a;
int ct;
int i=0;
for(;i<n;i++){
         ct=1;
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j])
        ct++;
    }
        if(ct==1)
            cout<<a[i]<<" ";

}
}
