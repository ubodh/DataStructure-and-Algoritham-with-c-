#include<bits/stdc++.h>
using namespace std;
 bool isPalindrome(int x) {
        int sum=0;
        int r=x;
        while(x){
           sum=sum*10+x%10;
           cout<<x<<endl;
           x=x/10;
        }
        if(r==sum)
        return true;
        else
        return false;
 }
int main(){
int x;
cin>>x;
if(isPalindrome(x))
    cout<<"yes";
else
    cout<<"not";
}
