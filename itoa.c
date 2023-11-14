#include<iostream>
int main() {
   int a = 10;
   char *intStr = itoa(a);
   string str = string(intStr);
   cout << str;
}
