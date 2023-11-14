#include<bits/stdc++.h>
using namespace std;
int main(){
priority_queue<int,vector<int>,greater<int>>m;
m.push(2);
m.push(1);
m.push(4);
m.push(9);
int cot=0;
while(m.size()>1){
    int p=m.top();
    m.pop();
    int q=m.top();
    m.pop();
    cot+=(p+q);
}
cout<<cot<<endl;
}
