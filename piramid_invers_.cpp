#include <iostream>
using namespace std;

int main() {
    int t = 6;

   
        for (int i = 0; i < t; i++) {
            // Print spaces
            for (int j = 0; j < i; j++) {
                cout << " ";
            }
            // Print stars
            for (int k = 0; k < 2 * (t - i) - 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
   
}
