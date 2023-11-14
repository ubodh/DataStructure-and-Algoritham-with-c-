#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;
int lcm;
for(lcm=2;lcm<=a*b;lcm++){
    if(lcm%a==0 and lcm%b==0)
    break;
}
cout<<lcm;
}
