#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,k;
    for(int i=1;i<=n;i++)
    {
        k=1;
        for(int j=1;j<n*2;j++)
        {
            if(j>=n+1-i && j<=n-1+i && k){
                cout<<"*";
                k=0;
            }
            else{
                cout<<" ";
                k=1;
            }
        }
        cout<<"\n";
    }
}
