#include<bits/stdc++.h>
using namespace std;

void merge(int nums1[], int m, int nums2[], int n) {
        for (int i = 0; i < n; i++) {
            nums1[i + m] = nums2[i];
        }
        sort(nums1, nums1 + n + m);
    }
int main(){
int nums1[]={3, 9, 10, 18, 23};
int m=*(&nums1+1)-nums1;
int nums2[]={5, 12, 15, 20, 21, 25};
int n=*(&nums2+1)-nums2;
merge(nums1,m,nums2,n);
for(int i=0;i<n;i++)
{
    cout<<nums2[i]<<" ";
}
}
