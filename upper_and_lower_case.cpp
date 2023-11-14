#include<bits/stdc++.h>
using namespace std;
char upperCase(char x)
{
 // p-a=P-A;=> p=a+P-A,   
    return 'A'+(x-'a');
}
char lowerCase(char ch){
    return 'a'+(ch-'A');
}
int power(int a,int b){
    if(b==0) return 1;
    int x=power(a,b/2);
    if(b&1) 
    return a*x*x;
    else 
    return x*x;
}
int main(){
    char s[10];
    cin>>s;
    for(int i=0;s[i];i++)
    cout<<upperCase(s[i])<<endl;
    cout<<lowerCase(s[i])<<endl;
    int a,b;
    cin>>a>>b;
    cout<<power(a,b);
}