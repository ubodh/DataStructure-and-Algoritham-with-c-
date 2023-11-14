#include<bits/stdc++.h>
using namespace std;
struct book {
    int bookId;
    char title[20];
    float price;
};
int main(){
     int n;
     cin>>n;  
    book* store = new book[n]; // Dynamically allocate an array of book structs

    for (int i = 0; i < n; i++) {
        cin >> store[i].bookId;
        cin.ignore(); // Ignore any remaining newline characters in the input buffer
        cin.getline(store[i].title, 20);
        cin >> store[i].price;
    }
//    for(auto &I :store){
//         cout<<I.bookId<<" ";
//         cout<<I.title<<" ";
//         cout<<I.price<<" ";
//     }
    for (int i = 0; i < n; i++) {
        cout << "Book ID: " << store[i].bookId << " ";
        cout << "Title: " << store[i].title << " ";
        cout << "Price: " << store[i].price << endl;
    }

    delete[] store; // Don't forget to release the allocated memory

    return 0;
    //   book store[]=new book[n];
    //   for(int i=0;i<n;i++){
    //     cin>>store[i].bookId;
    //     cin>>store[i].title;
    //     cin>>store[i].price;
    //   }

    //   for(auto I:store){
    //     cout<<I<<" ";
    //   }
}