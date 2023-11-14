#include <iostream>
#include <string>
using namespace std;

string NumberToString(int n) {
    // Use the to_string function to convert an integer to a string
    return to_string(n);
}

int main() {
    int n = 729;
    string result = NumberToString(n);
    cout << result << endl;
    return 0;
}
