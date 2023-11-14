#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

int l = 2 * n - 1;
		for (int i = 0; i < n; i++)
		{
			int elem = i + n;

			for (int k = 0; k < elem; k++)
			{
				// prints the star
				if ((k == n + i - 1) ||
					(k == n - i - 1))
				cout<<"*";
				else
                    cout<<" ";
			}
			cout<<endl;
		}
}
