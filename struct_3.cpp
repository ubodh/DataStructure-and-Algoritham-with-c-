#include <iostream>
using namespace std;

struct book {
    int bookId;
    char title[20];
    float price;

    void input() {
        cout << "Enter bookId, title, and price: ";
        cin >> bookId >> title >> price;
    }

    void print() {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    struct book ob;
    ob.input();  // Input book details
    ob.print();  // Print book details
    return 0;
}
