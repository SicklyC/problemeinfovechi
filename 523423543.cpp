#include <bits/stdc++.h>
using namespace std;
ifstream f("halfsort2.in");
ofstream g("halfsort2.out");

int n,v[100];

int main()
{
    f>>n;
    for (int i=0; i<n; i++)
        f>>v[i];

        for (int i=3;i<n;i=i+2)
        {
             int x=v[i];
             int p=i-2;
             while (p>=0 && v[p]<x)
             {
                 v[p+2]=v[p];
                 p=p-2;
             }
        }
        for (int i=2;i<n;i=i+2)
        {
             int x=v[i];
             int p=i-2;
             while (p>=0 && v[p]>x)
             {
                 v[p+2]=v[p];
                 p=p-2;
             }
        }
        for (int i=0;i<n;i++)
            g<<v[i]<<" ";
    return 0;
}
