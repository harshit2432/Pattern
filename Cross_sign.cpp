#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int i,j,k=1;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j || (i+j)==n-1)
            {
                  cout<<k;
            }
            else{
                cout<<" ";
            }
        }
        k++;
        cout<<"\n";
    }
}
