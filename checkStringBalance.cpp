#include <iostream>
#include <stack>
using namespace std;

bool checkStringBalance(string s) {
    stack<char> ch;

    for (auto i : s) {
        if (i == '(' || i == '{' || i == '[') {
            ch.push(i);
        } else if (i == ')' || i == '}' || i == ']') {
            if (ch.empty()) {
                return false; // Unbalanced: No matching opening bracket
            }

            char top = ch.top();
            if ((i == ')' && top == '(') ||
                (i == '}' && top == '{') ||
                (i == ']' && top == '[')) {
                ch.pop();
            } else {
                return false; // Unbalanced: Mismatched brackets
            }
        }
    }

    return ch.empty(); // If the stack is empty, the string is balanced
}

int main() {
    string s = "({[()]})";
    //cin >> s;

    if (checkStringBalance(s)) {
        cout << "yes" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
