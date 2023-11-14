#include<bits/stdc++.h>
using namespace std;
char upperCase(char x)
{
    
    return 'A'+(x-'a');
}
int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b&1) 
    return a*x*x;
    else 
    return x*x;
int main(){
    // char s[10];
    // cin>>s;
    // for(int i=0;s[i];i++)
    // cout<<upperCase(s[i]);
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}