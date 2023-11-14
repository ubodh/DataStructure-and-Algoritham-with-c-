#include<bits/stdc++.h>
using namespace std;//slection sort select the small element and swap samll index and first index element
void selection_sort(int *a,int n){
     int minIndex;
         for(int i=0;i<n;i++)
     {
        minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
        swap(a[i],a[minIndex]);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< "  ";
    }
}
