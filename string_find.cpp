#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "cccebababcd";
    int i = 0;

    while (i < s1.size()) {
        int index = s1.find('a', i);

        if (index != string::npos) {
            cout << "Found 'a' at index: " << index << endl;
            i = index + 1; // Move 'i' to the next position
        } else {
            break; // 'a' not found, exit the loop
        }
    }

    return 0;
}
