#include<bits/stdc++.h>
using namespace std;

int main() {
    int t = 6;
    for (int i = 6; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= 6 - t; k++) {
            cout << "*";
        }
        t--;
        cout << endl;
    }
  return 0;
}
