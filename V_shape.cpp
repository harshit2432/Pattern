#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,m=9;
    int i,j;
    char k='E';

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             if(i==j || (i+j)==m-1)
             {
                 cout<<k;
             }
             else{
                 cout<<" ";
             }
        }
        k--;
        cout<<"\n";
    }
}
