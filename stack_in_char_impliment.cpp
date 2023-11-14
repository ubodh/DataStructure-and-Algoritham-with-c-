
#include<bits/stdc++.h>
using namespace std;
int main(){
stack<char>ch;
ch.push('c');
ch.push('e');
cout<<ch.size()<<"stack size is"<<endl;
cout<<ch.empty()<<endl;
cout<<ch.top()<<endl;
ch.pop();
cout<<!ch.empty();
cout<<ch.top()<<endl;
ch.pop();
cout<<!ch.empty();
}

