#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,k;
    for(int i=0;i<=n;i++)
    {
        k=n;
        for(int j=0;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<k;
                k--;
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        k=n;
        for(int j=0;j<=n;j++)
        {
            if(j>=i)
            {
                cout<<" ";
            }
            else{
                cout<<k;
                k--;
            }
        }
        cout<<"\n";
    }
}
