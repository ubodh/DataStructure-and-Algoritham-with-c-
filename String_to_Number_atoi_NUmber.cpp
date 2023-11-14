#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    char s[10] = "123"; // Initialize s with a null-terminated string

    int my = atoi(s);
    cout << "my = " << my << endl;
    cout<<my+10;

    return 0;
}
