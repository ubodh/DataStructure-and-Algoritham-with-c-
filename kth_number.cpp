#include<bits/stdc++.h>
using  namespace std;
class solution{
public:
    int kth_number(vector<int>&v,int k)
    {
        priority_queue<int>pq;
        for(int i=0;i<k;i++)
        {
            pq.push(v[i]);
        }
        for(int j=k;j<=v.size();j++)
        {
            if(pq.top()<v[j])
                pq.pop();
            pq.push(v[j]);
        }
        return pq.top();
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int          x;
        cin>>x;
        v.push_back(x);
    }
    solution ob;
    cout<<"enter the k number"<<endl;
    int k;
    cin>>k;
    cout<<ob.kth_number(v,k);
}
