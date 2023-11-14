#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
int arr[1000];
int size;
heap(){
 arr[0]=-1;
 size=0;
}
void insert(int data){
 size=size+1;
 int index=size;
 arr[index]=data;
 while(index>1){
    int parent=index/2;
    if(arr[index]>arr[parent]){
            swap(arr[index],arr[parent]);
        index=parent;
    }else{
    return ;
    }
 }
}
void printf(){
for(int i=1;i<=size;i++){
    cout<<arr[i]<<" ";
}
}
};
int main(){
heap h;
h.insert(1);
h.insert(21);
h.insert(3);
h.insert(7);
h.printf();
}
