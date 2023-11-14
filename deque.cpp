#include<bits/stdc++.h>
using namespace std;
int main()
{

   std::deque<int> s;
    s.push_front(1);
    s.push_front(2);
    s.push_front(3);
    s.push_front(4);

    for(auto &i: s)    {
        std::cout << i << std::endl;
    }

}
