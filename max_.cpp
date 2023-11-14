#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,2};
    int ma;
    for(int i=0;i<4;i++){
        ma=max(ma,arr[i]);
    }
    cout<<ma;
}
