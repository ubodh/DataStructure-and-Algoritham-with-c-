#include <bits/stdc++.h>
using namespace std;
void sumOfKth(int arr[],int n){

    sort(arr,arr+n);
           int k=2;
    cout<< accumulate(arr+k,arr+n,0);
}
   int main() {
      int arr[] = {4,10,40,28,16};

      sumOfKth(arr, 5);
   return 0;
}
