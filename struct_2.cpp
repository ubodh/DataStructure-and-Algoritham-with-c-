#include<bits/stdc++.h>
using namespace std;
struct book{
    int bookId;
    char title[20];
    float price;
};
int main(){
    struct book ob;
        cout<<"Enter bookId ,title and price"<<endl;
        cin>>ob.bookId>>ob.title>>ob.price;
        cout<<ob.bookId<<" "<<ob.title<<" "<<ob.price<<endl;
}