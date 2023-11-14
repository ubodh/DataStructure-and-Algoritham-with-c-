#include<bits/stdc++.h>
#define row 10
#define col 20
using namespace std;
int main(){
char p[]="mysirg.com";
cout<<sizeof(p);
//cout<<col;
for(int i=0;i<sizeof(p);i++){
    cout<<p[i]<<" ";
}
for(int i=0;i<strlen(p);i++){
    cout<<p[i]<<" ";
}
for(int i=0;p[i];i++){
    cout<<p[i]<<" ";
}
for (int i = 0; p[i] != '\0'; i++) {
    cout << p[i] << " ";
}

}
