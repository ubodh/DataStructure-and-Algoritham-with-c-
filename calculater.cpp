#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    char c;
    cin>>c;
    switch(c){
        case '+':
        cout<<(a+b);
        break;
        case '/':
        cout<<(a/b);
        break;
        case '*':
        cout<<(a*b);
        break;
        case '%':
        cout<<(a%b);
        break;
        default:
        cout<<"not any match the operator";

    }
}
