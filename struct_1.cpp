
#include <iostream>
using namespace std;

struct book {
    int bookId;
    char title[20];
    float price;

    void print() {
        cout << "Enter bookId, title, and price: ";
        cin >> bookId >> title >> price;
        cout << bookId << " " << title << " " << price << endl;
    }
};

int main() {
    struct book ob;
    ob.print();
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// struct book{
//     int bookId;
//     char title[20];
//     float price;
//     void print(){
//         cout<<"Enter bookId ,title and price"<<endl;
//         cin>>ob.bookId>>ob.title>ob.price;
//         cout<<ob.bookId<<" "<<ob.title<<" "<<ob.price<<endl;
//     }
// }
// void main(){
//     struct book ob;
//      ob.print();
// }